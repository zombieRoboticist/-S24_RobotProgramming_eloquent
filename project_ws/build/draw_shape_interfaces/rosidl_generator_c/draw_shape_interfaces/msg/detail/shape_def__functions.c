// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice
#include "draw_shape_interfaces/msg/detail/shape_def__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `shape`
#include "rosidl_runtime_c/string_functions.h"

bool
draw_shape_interfaces__msg__ShapeDef__init(draw_shape_interfaces__msg__ShapeDef * msg)
{
  if (!msg) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__init(&msg->shape)) {
    draw_shape_interfaces__msg__ShapeDef__fini(msg);
    return false;
  }
  // size
  return true;
}

void
draw_shape_interfaces__msg__ShapeDef__fini(draw_shape_interfaces__msg__ShapeDef * msg)
{
  if (!msg) {
    return;
  }
  // shape
  rosidl_runtime_c__String__fini(&msg->shape);
  // size
}

bool
draw_shape_interfaces__msg__ShapeDef__are_equal(const draw_shape_interfaces__msg__ShapeDef * lhs, const draw_shape_interfaces__msg__ShapeDef * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  return true;
}

bool
draw_shape_interfaces__msg__ShapeDef__copy(
  const draw_shape_interfaces__msg__ShapeDef * input,
  draw_shape_interfaces__msg__ShapeDef * output)
{
  if (!input || !output) {
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // size
  output->size = input->size;
  return true;
}

draw_shape_interfaces__msg__ShapeDef *
draw_shape_interfaces__msg__ShapeDef__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__msg__ShapeDef * msg = (draw_shape_interfaces__msg__ShapeDef *)allocator.allocate(sizeof(draw_shape_interfaces__msg__ShapeDef), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(draw_shape_interfaces__msg__ShapeDef));
  bool success = draw_shape_interfaces__msg__ShapeDef__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
draw_shape_interfaces__msg__ShapeDef__destroy(draw_shape_interfaces__msg__ShapeDef * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    draw_shape_interfaces__msg__ShapeDef__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
draw_shape_interfaces__msg__ShapeDef__Sequence__init(draw_shape_interfaces__msg__ShapeDef__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__msg__ShapeDef * data = NULL;

  if (size) {
    data = (draw_shape_interfaces__msg__ShapeDef *)allocator.zero_allocate(size, sizeof(draw_shape_interfaces__msg__ShapeDef), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = draw_shape_interfaces__msg__ShapeDef__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        draw_shape_interfaces__msg__ShapeDef__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
draw_shape_interfaces__msg__ShapeDef__Sequence__fini(draw_shape_interfaces__msg__ShapeDef__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      draw_shape_interfaces__msg__ShapeDef__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

draw_shape_interfaces__msg__ShapeDef__Sequence *
draw_shape_interfaces__msg__ShapeDef__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__msg__ShapeDef__Sequence * array = (draw_shape_interfaces__msg__ShapeDef__Sequence *)allocator.allocate(sizeof(draw_shape_interfaces__msg__ShapeDef__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = draw_shape_interfaces__msg__ShapeDef__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
draw_shape_interfaces__msg__ShapeDef__Sequence__destroy(draw_shape_interfaces__msg__ShapeDef__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    draw_shape_interfaces__msg__ShapeDef__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
draw_shape_interfaces__msg__ShapeDef__Sequence__are_equal(const draw_shape_interfaces__msg__ShapeDef__Sequence * lhs, const draw_shape_interfaces__msg__ShapeDef__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!draw_shape_interfaces__msg__ShapeDef__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
draw_shape_interfaces__msg__ShapeDef__Sequence__copy(
  const draw_shape_interfaces__msg__ShapeDef__Sequence * input,
  draw_shape_interfaces__msg__ShapeDef__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(draw_shape_interfaces__msg__ShapeDef);
    draw_shape_interfaces__msg__ShapeDef * data =
      (draw_shape_interfaces__msg__ShapeDef *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!draw_shape_interfaces__msg__ShapeDef__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          draw_shape_interfaces__msg__ShapeDef__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!draw_shape_interfaces__msg__ShapeDef__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
