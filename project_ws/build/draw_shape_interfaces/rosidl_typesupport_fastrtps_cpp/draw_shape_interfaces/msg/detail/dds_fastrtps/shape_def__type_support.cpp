// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice
#include "draw_shape_interfaces/msg/detail/shape_def__rosidl_typesupport_fastrtps_cpp.hpp"
#include "draw_shape_interfaces/msg/detail/shape_def__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace draw_shape_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_draw_shape_interfaces
cdr_serialize(
  const draw_shape_interfaces::msg::ShapeDef & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: shape
  cdr << ros_message.shape;
  // Member: size
  cdr << ros_message.size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_draw_shape_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  draw_shape_interfaces::msg::ShapeDef & ros_message)
{
  // Member: shape
  cdr >> ros_message.shape;

  // Member: size
  cdr >> ros_message.size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_draw_shape_interfaces
get_serialized_size(
  const draw_shape_interfaces::msg::ShapeDef & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.shape.size() + 1);
  // Member: size
  {
    size_t item_size = sizeof(ros_message.size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_draw_shape_interfaces
max_serialized_size_ShapeDef(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: shape
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ShapeDef__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const draw_shape_interfaces::msg::ShapeDef *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShapeDef__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<draw_shape_interfaces::msg::ShapeDef *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShapeDef__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const draw_shape_interfaces::msg::ShapeDef *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShapeDef__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ShapeDef(full_bounded, 0);
}

static message_type_support_callbacks_t _ShapeDef__callbacks = {
  "draw_shape_interfaces::msg",
  "ShapeDef",
  _ShapeDef__cdr_serialize,
  _ShapeDef__cdr_deserialize,
  _ShapeDef__get_serialized_size,
  _ShapeDef__max_serialized_size
};

static rosidl_message_type_support_t _ShapeDef__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShapeDef__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace draw_shape_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_draw_shape_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<draw_shape_interfaces::msg::ShapeDef>()
{
  return &draw_shape_interfaces::msg::typesupport_fastrtps_cpp::_ShapeDef__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, draw_shape_interfaces, msg, ShapeDef)() {
  return &draw_shape_interfaces::msg::typesupport_fastrtps_cpp::_ShapeDef__handle;
}

#ifdef __cplusplus
}
#endif
