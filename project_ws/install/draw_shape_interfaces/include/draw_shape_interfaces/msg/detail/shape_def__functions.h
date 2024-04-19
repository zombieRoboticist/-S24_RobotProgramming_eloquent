// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__FUNCTIONS_H_
#define DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "draw_shape_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "draw_shape_interfaces/msg/detail/shape_def__struct.h"

/// Initialize msg/ShapeDef message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * draw_shape_interfaces__msg__ShapeDef
 * )) before or use
 * draw_shape_interfaces__msg__ShapeDef__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__init(draw_shape_interfaces__msg__ShapeDef * msg);

/// Finalize msg/ShapeDef message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
void
draw_shape_interfaces__msg__ShapeDef__fini(draw_shape_interfaces__msg__ShapeDef * msg);

/// Create msg/ShapeDef message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * draw_shape_interfaces__msg__ShapeDef__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
draw_shape_interfaces__msg__ShapeDef *
draw_shape_interfaces__msg__ShapeDef__create();

/// Destroy msg/ShapeDef message.
/**
 * It calls
 * draw_shape_interfaces__msg__ShapeDef__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
void
draw_shape_interfaces__msg__ShapeDef__destroy(draw_shape_interfaces__msg__ShapeDef * msg);

/// Check for msg/ShapeDef message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__are_equal(const draw_shape_interfaces__msg__ShapeDef * lhs, const draw_shape_interfaces__msg__ShapeDef * rhs);

/// Copy a msg/ShapeDef message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__copy(
  const draw_shape_interfaces__msg__ShapeDef * input,
  draw_shape_interfaces__msg__ShapeDef * output);

/// Initialize array of msg/ShapeDef messages.
/**
 * It allocates the memory for the number of elements and calls
 * draw_shape_interfaces__msg__ShapeDef__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__Sequence__init(draw_shape_interfaces__msg__ShapeDef__Sequence * array, size_t size);

/// Finalize array of msg/ShapeDef messages.
/**
 * It calls
 * draw_shape_interfaces__msg__ShapeDef__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
void
draw_shape_interfaces__msg__ShapeDef__Sequence__fini(draw_shape_interfaces__msg__ShapeDef__Sequence * array);

/// Create array of msg/ShapeDef messages.
/**
 * It allocates the memory for the array and calls
 * draw_shape_interfaces__msg__ShapeDef__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
draw_shape_interfaces__msg__ShapeDef__Sequence *
draw_shape_interfaces__msg__ShapeDef__Sequence__create(size_t size);

/// Destroy array of msg/ShapeDef messages.
/**
 * It calls
 * draw_shape_interfaces__msg__ShapeDef__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
void
draw_shape_interfaces__msg__ShapeDef__Sequence__destroy(draw_shape_interfaces__msg__ShapeDef__Sequence * array);

/// Check for msg/ShapeDef message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__Sequence__are_equal(const draw_shape_interfaces__msg__ShapeDef__Sequence * lhs, const draw_shape_interfaces__msg__ShapeDef__Sequence * rhs);

/// Copy an array of msg/ShapeDef messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_draw_shape_interfaces
bool
draw_shape_interfaces__msg__ShapeDef__Sequence__copy(
  const draw_shape_interfaces__msg__ShapeDef__Sequence * input,
  draw_shape_interfaces__msg__ShapeDef__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__FUNCTIONS_H_
