import socket
import json
import base64
import random
import binascii
import hashlib
import binascii
from Crypto.Cipher import AES

def PostandGet():
    length=''
    hashed_pw=b'uicpperq'
    hashed_pw=hashlib.sha1(hashed_pw).hexdigest()[0:32]
    values ={'client_id':'ryder','server_id':'token_server','nonce':0}
    jdata = json.dumps(values)
    for i in range(8-len(str(len(jdata)))):
        length=str(0)+length
    length=length+str(len(jdata))
    s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    s.connect(('129.10.115.56',5452))
    s.sendall(length+jdata)
    data1=s.recv(8)
    data1=int(data1)
    data2=s.recv(data1)
    data3=base64.b64decode(data2)
    iv,waittodecrypt=data3[:16],data3[16:]
    cipher=AES.new(hashed_pw,AES.MODE_CFB,iv)
    decrypted=cipher.decrypt(waittodecrypt)
    decrypted=json.loads(decrypted)
    s.close()
    return decrypted

def ConnectNSServer(decryptedmessage):
    waitforsend={}
    print(decryptedmessage)
    sdata=decryptedmessage['server_msg']
    length=''
    for i in range(8-len(str(len(sdata)))):
        length=str(0)+length
    length=length+str(len(sdata))
    t=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    t.connect(('129.10.115.56',5453))
    t.sendall(length+sdata)
    data1=t.recv(8)
    data1=int(data1)
    data2=t.recv(data1)
    data3=base64.b64decode(data2)
    iv,waittodecrypt=data3[:16],data3[16:]
    cipher=AES.new(decryptedmessage['key'],AES.MODE_CFB,iv)
    decrypted=cipher.decrypt(waittodecrypt)
    decrypted=json.loads(decrypted)
    decrypted['nonce']=decrypted['nonce']-1
    cipher2=AES.new(decryptedmessage['key'],AES.MODE_CFB,iv)
    length=''
    sdata=base64.b64encode(iv+cipher2.encrypt(json.dumps(decrypted)))
    for i in range(8-len(str(len(sdata)))):
        length=str(0)+length
    length=length+str(len(sdata))
    t.sendall(length+sdata)
    data1=t.recv(8)
    data1=int(data1)
    data2=t.recv(data1)
    t.close()
    print(data1)
    print(data2)



ConnectNSServer(PostandGet())