// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_H_
#define DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desired_pose'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/GoToPoint in the package draw_shape_interfaces.
typedef struct draw_shape_interfaces__srv__GoToPoint_Request
{
  geometry_msgs__msg__Point desired_pose;
} draw_shape_interfaces__srv__GoToPoint_Request;

// Struct for a sequence of draw_shape_interfaces__srv__GoToPoint_Request.
typedef struct draw_shape_interfaces__srv__GoToPoint_Request__Sequence
{
  draw_shape_interfaces__srv__GoToPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} draw_shape_interfaces__srv__GoToPoint_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GoToPoint in the package draw_shape_interfaces.
typedef struct draw_shape_interfaces__srv__GoToPoint_Response
{
  int8_t ret;
} draw_shape_interfaces__srv__GoToPoint_Response;

// Struct for a sequence of draw_shape_interfaces__srv__GoToPoint_Response.
typedef struct draw_shape_interfaces__srv__GoToPoint_Response__Sequence
{
  draw_shape_interfaces__srv__GoToPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} draw_shape_interfaces__srv__GoToPoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_H_
