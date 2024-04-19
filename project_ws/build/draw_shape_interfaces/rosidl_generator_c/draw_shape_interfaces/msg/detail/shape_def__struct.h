// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_H_
#define DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shape'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ShapeDef in the package draw_shape_interfaces.
typedef struct draw_shape_interfaces__msg__ShapeDef
{
  rosidl_runtime_c__String shape;
  uint8_t size;
} draw_shape_interfaces__msg__ShapeDef;

// Struct for a sequence of draw_shape_interfaces__msg__ShapeDef.
typedef struct draw_shape_interfaces__msg__ShapeDef__Sequence
{
  draw_shape_interfaces__msg__ShapeDef * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} draw_shape_interfaces__msg__ShapeDef__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_H_
