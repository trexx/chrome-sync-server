# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app_list_specifics.proto

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
  name='app_list_specifics.proto',
  package='sync_pb',
  syntax='proto2',
  serialized_pb=_b('\n\x18\x61pp_list_specifics.proto\x12\x07sync_pb\"\xb7\x02\n\x10\x41ppListSpecifics\x12\x0f\n\x07item_id\x18\x01 \x01(\t\x12<\n\titem_type\x18\x02 \x01(\x0e\x32).sync_pb.AppListSpecifics.AppListItemType\x12\x11\n\titem_name\x18\x03 \x01(\t\x12\x11\n\tparent_id\x18\x04 \x01(\t\x12!\n\x15OBSOLETE_page_ordinal\x18\x05 \x01(\tB\x02\x18\x01\x12\x14\n\x0citem_ordinal\x18\x06 \x01(\t\x12\x18\n\x10item_pin_ordinal\x18\x07 \x01(\t\"[\n\x0f\x41ppListItemType\x12\x0c\n\x08TYPE_APP\x10\x01\x12\x1b\n\x17TYPE_REMOVE_DEFAULT_APP\x10\x02\x12\x0f\n\x0bTYPE_FOLDER\x10\x03\x12\x0c\n\x08TYPE_URL\x10\x04\x42\x02H\x03')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_APPLISTSPECIFICS_APPLISTITEMTYPE = _descriptor.EnumDescriptor(
  name='AppListItemType',
  full_name='sync_pb.AppListSpecifics.AppListItemType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TYPE_APP', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TYPE_REMOVE_DEFAULT_APP', index=1, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TYPE_FOLDER', index=2, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TYPE_URL', index=3, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=258,
  serialized_end=349,
)
_sym_db.RegisterEnumDescriptor(_APPLISTSPECIFICS_APPLISTITEMTYPE)


_APPLISTSPECIFICS = _descriptor.Descriptor(
  name='AppListSpecifics',
  full_name='sync_pb.AppListSpecifics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='item_id', full_name='sync_pb.AppListSpecifics.item_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='item_type', full_name='sync_pb.AppListSpecifics.item_type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='item_name', full_name='sync_pb.AppListSpecifics.item_name', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='parent_id', full_name='sync_pb.AppListSpecifics.parent_id', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='OBSOLETE_page_ordinal', full_name='sync_pb.AppListSpecifics.OBSOLETE_page_ordinal', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))),
    _descriptor.FieldDescriptor(
      name='item_ordinal', full_name='sync_pb.AppListSpecifics.item_ordinal', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='item_pin_ordinal', full_name='sync_pb.AppListSpecifics.item_pin_ordinal', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _APPLISTSPECIFICS_APPLISTITEMTYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=38,
  serialized_end=349,
)

_APPLISTSPECIFICS.fields_by_name['item_type'].enum_type = _APPLISTSPECIFICS_APPLISTITEMTYPE
_APPLISTSPECIFICS_APPLISTITEMTYPE.containing_type = _APPLISTSPECIFICS
DESCRIPTOR.message_types_by_name['AppListSpecifics'] = _APPLISTSPECIFICS

AppListSpecifics = _reflection.GeneratedProtocolMessageType('AppListSpecifics', (_message.Message,), dict(
  DESCRIPTOR = _APPLISTSPECIFICS,
  __module__ = 'app_list_specifics_pb2'
  # @@protoc_insertion_point(class_scope:sync_pb.AppListSpecifics)
  ))
_sym_db.RegisterMessage(AppListSpecifics)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
_APPLISTSPECIFICS.fields_by_name['OBSOLETE_page_ordinal'].has_options = True
_APPLISTSPECIFICS.fields_by_name['OBSOLETE_page_ordinal']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))
# @@protoc_insertion_point(module_scope)
