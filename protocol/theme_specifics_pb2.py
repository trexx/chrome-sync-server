# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: theme_specifics.proto

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
  name='theme_specifics.proto',
  package='sync_pb',
  syntax='proto2',
  serialized_pb=_b('\n\x15theme_specifics.proto\x12\x07sync_pb\"\xa4\x01\n\x0eThemeSpecifics\x12\x18\n\x10use_custom_theme\x18\x01 \x01(\x08\x12#\n\x1buse_system_theme_by_default\x18\x02 \x01(\x08\x12\x19\n\x11\x63ustom_theme_name\x18\x03 \x01(\t\x12\x17\n\x0f\x63ustom_theme_id\x18\x04 \x01(\t\x12\x1f\n\x17\x63ustom_theme_update_url\x18\x05 \x01(\tB\x02H\x03')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_THEMESPECIFICS = _descriptor.Descriptor(
  name='ThemeSpecifics',
  full_name='sync_pb.ThemeSpecifics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='use_custom_theme', full_name='sync_pb.ThemeSpecifics.use_custom_theme', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='use_system_theme_by_default', full_name='sync_pb.ThemeSpecifics.use_system_theme_by_default', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='custom_theme_name', full_name='sync_pb.ThemeSpecifics.custom_theme_name', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='custom_theme_id', full_name='sync_pb.ThemeSpecifics.custom_theme_id', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='custom_theme_update_url', full_name='sync_pb.ThemeSpecifics.custom_theme_update_url', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=35,
  serialized_end=199,
)

DESCRIPTOR.message_types_by_name['ThemeSpecifics'] = _THEMESPECIFICS

ThemeSpecifics = _reflection.GeneratedProtocolMessageType('ThemeSpecifics', (_message.Message,), dict(
  DESCRIPTOR = _THEMESPECIFICS,
  __module__ = 'theme_specifics_pb2'
  # @@protoc_insertion_point(class_scope:sync_pb.ThemeSpecifics)
  ))
_sym_db.RegisterMessage(ThemeSpecifics)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)
