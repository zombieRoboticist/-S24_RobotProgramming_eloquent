// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "draw_shape_interfaces/msg/detail/shape_def__rosidl_typesupport_introspection_c.h"
#include "draw_shape_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "draw_shape_interfaces/msg/detail/shape_def__functions.h"
#include "draw_shape_interfaces/msg/detail/shape_def__struct.h"


// Include directives for member types
// Member `shape`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  draw_shape_interfaces__msg__ShapeDef__init(message_memory);
}

void ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_fini_function(void * message_memory)
{
  draw_shape_interfaces__msg__ShapeDef__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_member_array[2] = {
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces__msg__ShapeDef, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces__msg__ShapeDef, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_members = {
  "draw_shape_interfaces__msg",  // message namespace
  "ShapeDef",  // message name
  2,  // number of fields
  sizeof(draw_shape_interfaces__msg__ShapeDef),
  ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_member_array,  // message members
  ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_init_function,  // function to initialize message memory (memory has to be allocated)
  ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_type_support_handle = {
  0,
  &ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_draw_shape_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, msg, ShapeDef)() {
  if (!ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_type_support_handle.typesupport_identifier) {
    ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShapeDef__rosidl_typesupport_introspection_c__ShapeDef_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
