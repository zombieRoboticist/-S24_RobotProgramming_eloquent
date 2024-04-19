// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice
#include "draw_shape_interfaces/msg/detail/shape_def__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "draw_shape_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "draw_shape_interfaces/msg/detail/shape_def__struct.h"
#include "draw_shape_interfaces/msg/detail/shape_def__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // shape
#include "rosidl_runtime_c/string_functions.h"  // shape

// forward declare type support functions


using _ShapeDef__ros_msg_type = draw_shape_interfaces__msg__ShapeDef;

static bool _ShapeDef__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShapeDef__ros_msg_type * ros_message = static_cast<const _ShapeDef__ros_msg_type *>(untyped_ros_message);
  // Field name: shape
  {
    const rosidl_runtime_c__String * str = &ros_message->shape;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: size
  {
    cdr << ros_message->size;
  }

  return true;
}

static bool _ShapeDef__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShapeDef__ros_msg_type * ros_message = static_cast<_ShapeDef__ros_msg_type *>(untyped_ros_message);
  // Field name: shape
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->shape.data) {
      rosidl_runtime_c__String__init(&ros_message->shape);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->shape,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'shape'\n");
      return false;
    }
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_draw_shape_interfaces
size_t get_serialized_size_draw_shape_interfaces__msg__ShapeDef(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShapeDef__ros_msg_type * ros_message = static_cast<const _ShapeDef__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->shape.size + 1);
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ShapeDef__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_draw_shape_interfaces__msg__ShapeDef(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_draw_shape_interfaces
size_t max_serialized_size_draw_shape_interfaces__msg__ShapeDef(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: shape
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ShapeDef__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_draw_shape_interfaces__msg__ShapeDef(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ShapeDef = {
  "draw_shape_interfaces::msg",
  "ShapeDef",
  _ShapeDef__cdr_serialize,
  _ShapeDef__cdr_deserialize,
  _ShapeDef__get_serialized_size,
  _ShapeDef__max_serialized_size
};

static rosidl_message_type_support_t _ShapeDef__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShapeDef,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, draw_shape_interfaces, msg, ShapeDef)() {
  return &_ShapeDef__type_support;
}

#if defined(__cplusplus)
}
#endif
