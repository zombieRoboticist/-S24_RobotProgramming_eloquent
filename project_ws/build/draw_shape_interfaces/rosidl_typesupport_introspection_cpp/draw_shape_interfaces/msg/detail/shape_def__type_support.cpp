// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "draw_shape_interfaces/msg/detail/shape_def__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace draw_shape_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ShapeDef_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) draw_shape_interfaces::msg::ShapeDef(_init);
}

void ShapeDef_fini_function(void * message_memory)
{
  auto typed_message = static_cast<draw_shape_interfaces::msg::ShapeDef *>(message_memory);
  typed_message->~ShapeDef();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ShapeDef_message_member_array[2] = {
  {
    "shape",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces::msg::ShapeDef, shape),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces::msg::ShapeDef, size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ShapeDef_message_members = {
  "draw_shape_interfaces::msg",  // message namespace
  "ShapeDef",  // message name
  2,  // number of fields
  sizeof(draw_shape_interfaces::msg::ShapeDef),
  ShapeDef_message_member_array,  // message members
  ShapeDef_init_function,  // function to initialize message memory (memory has to be allocated)
  ShapeDef_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ShapeDef_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ShapeDef_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace draw_shape_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<draw_shape_interfaces::msg::ShapeDef>()
{
  return &::draw_shape_interfaces::msg::rosidl_typesupport_introspection_cpp::ShapeDef_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, draw_shape_interfaces, msg, ShapeDef)() {
  return &::draw_shape_interfaces::msg::rosidl_typesupport_introspection_cpp::ShapeDef_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
