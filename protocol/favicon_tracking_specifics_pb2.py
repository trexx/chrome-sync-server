# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: favicon_tracking_specifics.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='favicon_tracking_specifics.proto',
  package='sync_pb',
  syntax='proto2',
  serialized_pb=_b('\n favicon_tracking_specifics.proto\x12\x07sync_pb\"b\n\x18\x46\x61viconTrackingSpecifics\x12\x13\n\x0b\x66\x61vicon_url\x18\x01 \x01(\t\x12\x1a\n\x12last_visit_time_ms\x18\x03 \x01(\x03\x12\x15\n\ris_bookmarked\x18\x04 \x01(\x08\x42\x02H\x03')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_FAVICONTRACKINGSPECIFICS = _descriptor.Descriptor(
  name='FaviconTrackingSpecifics',
  full_name='sync_pb.FaviconTrackingSpecifics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='favicon_url', full_name='sync_pb.FaviconTrackingSpecifics.favicon_url', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_visit_time_ms', full_name='sync_pb.FaviconTrackingSpecifics.last_visit_time_ms', index=1,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_bookmarked', full_name='sync_pb.FaviconTrackingSpecifics.is_bookmarked', index=2,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=45,
  serialized_end=143,
)

DESCRIPTOR.message_types_by_name['FaviconTrackingSpecifics'] = _FAVICONTRACKINGSPECIFICS

FaviconTrackingSpecifics = _reflection.GeneratedProtocolMessageType('FaviconTrackingSpecifics', (_message.Message,), dict(
  DESCRIPTOR = _FAVICONTRACKINGSPECIFICS,
  __module__ = 'favicon_tracking_specifics_pb2'
  # @@protoc_insertion_point(class_scope:sync_pb.FaviconTrackingSpecifics)
  ))
_sym_db.RegisterMessage(FaviconTrackingSpecifics)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)
