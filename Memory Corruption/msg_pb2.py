# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: msg.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='msg.proto',
  package='proto',
  serialized_pb='\n\tmsg.proto\x12\x05proto\"4\n\x07\x43\x65rtReq\x12\x0c\n\x04user\x18\x01 \x02(\x0c\x12\r\n\x05nonce\x18\x02 \x02(\x0c\x12\x0c\n\x04\x64\x61ta\x18\x03 \x02(\x0c\"O\n\x08\x43\x65rtResp\x12&\n\tresp_type\x18\x01 \x02(\x0e\x32\x13.proto.CertRespType\x12\r\n\x05nonce\x18\x02 \x02(\x0c\x12\x0c\n\x04hmac\x18\x03 \x01(\x0c* \n\x0c\x43\x65rtRespType\x12\x06\n\x02OK\x10\x00\x12\x08\n\x04NOPE\x10\x01')

_CERTRESPTYPE = _descriptor.EnumDescriptor(
  name='CertRespType',
  full_name='proto.CertRespType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OK', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NOPE', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=155,
  serialized_end=187,
)

CertRespType = enum_type_wrapper.EnumTypeWrapper(_CERTRESPTYPE)
OK = 0
NOPE = 1



_CERTREQ = _descriptor.Descriptor(
  name='CertReq',
  full_name='proto.CertReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='proto.CertReq.user', index=0,
      number=1, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nonce', full_name='proto.CertReq.nonce', index=1,
      number=2, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='proto.CertReq.data', index=2,
      number=3, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=20,
  serialized_end=72,
)


_CERTRESP = _descriptor.Descriptor(
  name='CertResp',
  full_name='proto.CertResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='resp_type', full_name='proto.CertResp.resp_type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nonce', full_name='proto.CertResp.nonce', index=1,
      number=2, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hmac', full_name='proto.CertResp.hmac', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=74,
  serialized_end=153,
)

_CERTRESP.fields_by_name['resp_type'].enum_type = _CERTRESPTYPE
DESCRIPTOR.message_types_by_name['CertReq'] = _CERTREQ
DESCRIPTOR.message_types_by_name['CertResp'] = _CERTRESP

class CertReq(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CERTREQ

  # @@protoc_insertion_point(class_scope:proto.CertReq)

class CertResp(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CERTRESP

  # @@protoc_insertion_point(class_scope:proto.CertResp)


# @@protoc_insertion_point(module_scope)
