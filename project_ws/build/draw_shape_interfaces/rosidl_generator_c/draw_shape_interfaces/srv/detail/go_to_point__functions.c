// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice
#include "draw_shape_interfaces/srv/detail/go_to_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `desired_pose`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
draw_shape_interfaces__srv__GoToPoint_Request__init(draw_shape_interfaces__srv__GoToPoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__Point__init(&msg->desired_pose)) {
    draw_shape_interfaces__srv__GoToPoint_Request__fini(msg);
    return false;
  }
  return true;
}

void
draw_shape_interfaces__srv__GoToPoint_Request__fini(draw_shape_interfaces__srv__GoToPoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // desired_pose
  geometry_msgs__msg__Point__fini(&msg->desired_pose);
}

bool
draw_shape_interfaces__srv__GoToPoint_Request__are_equal(const draw_shape_interfaces__srv__GoToPoint_Request * lhs, const draw_shape_interfaces__srv__GoToPoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->desired_pose), &(rhs->desired_pose)))
  {
    return false;
  }
  return true;
}

bool
draw_shape_interfaces__srv__GoToPoint_Request__copy(
  const draw_shape_interfaces__srv__GoToPoint_Request * input,
  draw_shape_interfaces__srv__GoToPoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_pose
  if (!geometry_msgs__msg__Point__copy(
      &(input->desired_pose), &(output->desired_pose)))
  {
    return false;
  }
  return true;
}

draw_shape_interfaces__srv__GoToPoint_Request *
draw_shape_interfaces__srv__GoToPoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Request * msg = (draw_shape_interfaces__srv__GoToPoint_Request *)allocator.allocate(sizeof(draw_shape_interfaces__srv__GoToPoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(draw_shape_interfaces__srv__GoToPoint_Request));
  bool success = draw_shape_interfaces__srv__GoToPoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
draw_shape_interfaces__srv__GoToPoint_Request__destroy(draw_shape_interfaces__srv__GoToPoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    draw_shape_interfaces__srv__GoToPoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__init(draw_shape_interfaces__srv__GoToPoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Request * data = NULL;

  if (size) {
    data = (draw_shape_interfaces__srv__GoToPoint_Request *)allocator.zero_allocate(size, sizeof(draw_shape_interfaces__srv__GoToPoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = draw_shape_interfaces__srv__GoToPoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        draw_shape_interfaces__srv__GoToPoint_Request__fini(&data[i - 1]);
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
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__fini(draw_shape_interfaces__srv__GoToPoint_Request__Sequence * array)
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
      draw_shape_interfaces__srv__GoToPoint_Request__fini(&array->data[i]);
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

draw_shape_interfaces__srv__GoToPoint_Request__Sequence *
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Request__Sequence * array = (draw_shape_interfaces__srv__GoToPoint_Request__Sequence *)allocator.allocate(sizeof(draw_shape_interfaces__srv__GoToPoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = draw_shape_interfaces__srv__GoToPoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__destroy(draw_shape_interfaces__srv__GoToPoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    draw_shape_interfaces__srv__GoToPoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__are_equal(const draw_shape_interfaces__srv__GoToPoint_Request__Sequence * lhs, const draw_shape_interfaces__srv__GoToPoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!draw_shape_interfaces__srv__GoToPoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
draw_shape_interfaces__srv__GoToPoint_Request__Sequence__copy(
  const draw_shape_interfaces__srv__GoToPoint_Request__Sequence * input,
  draw_shape_interfaces__srv__GoToPoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(draw_shape_interfaces__srv__GoToPoint_Request);
    draw_shape_interfaces__srv__GoToPoint_Request * data =
      (draw_shape_interfaces__srv__GoToPoint_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!draw_shape_interfaces__srv__GoToPoint_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          draw_shape_interfaces__srv__GoToPoint_Request__fini(&data[i]);
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
    if (!draw_shape_interfaces__srv__GoToPoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
draw_shape_interfaces__srv__GoToPoint_Response__init(draw_shape_interfaces__srv__GoToPoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
draw_shape_interfaces__srv__GoToPoint_Response__fini(draw_shape_interfaces__srv__GoToPoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
draw_shape_interfaces__srv__GoToPoint_Response__are_equal(const draw_shape_interfaces__srv__GoToPoint_Response * lhs, const draw_shape_interfaces__srv__GoToPoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
draw_shape_interfaces__srv__GoToPoint_Response__copy(
  const draw_shape_interfaces__srv__GoToPoint_Response * input,
  draw_shape_interfaces__srv__GoToPoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

draw_shape_interfaces__srv__GoToPoint_Response *
draw_shape_interfaces__srv__GoToPoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Response * msg = (draw_shape_interfaces__srv__GoToPoint_Response *)allocator.allocate(sizeof(draw_shape_interfaces__srv__GoToPoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(draw_shape_interfaces__srv__GoToPoint_Response));
  bool success = draw_shape_interfaces__srv__GoToPoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
draw_shape_interfaces__srv__GoToPoint_Response__destroy(draw_shape_interfaces__srv__GoToPoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    draw_shape_interfaces__srv__GoToPoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__init(draw_shape_interfaces__srv__GoToPoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Response * data = NULL;

  if (size) {
    data = (draw_shape_interfaces__srv__GoToPoint_Response *)allocator.zero_allocate(size, sizeof(draw_shape_interfaces__srv__GoToPoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = draw_shape_interfaces__srv__GoToPoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        draw_shape_interfaces__srv__GoToPoint_Response__fini(&data[i - 1]);
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
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__fini(draw_shape_interfaces__srv__GoToPoint_Response__Sequence * array)
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
      draw_shape_interfaces__srv__GoToPoint_Response__fini(&array->data[i]);
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

draw_shape_interfaces__srv__GoToPoint_Response__Sequence *
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  draw_shape_interfaces__srv__GoToPoint_Response__Sequence * array = (draw_shape_interfaces__srv__GoToPoint_Response__Sequence *)allocator.allocate(sizeof(draw_shape_interfaces__srv__GoToPoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = draw_shape_interfaces__srv__GoToPoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__destroy(draw_shape_interfaces__srv__GoToPoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    draw_shape_interfaces__srv__GoToPoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__are_equal(const draw_shape_interfaces__srv__GoToPoint_Response__Sequence * lhs, const draw_shape_interfaces__srv__GoToPoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!draw_shape_interfaces__srv__GoToPoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
draw_shape_interfaces__srv__GoToPoint_Response__Sequence__copy(
  const draw_shape_interfaces__srv__GoToPoint_Response__Sequence * input,
  draw_shape_interfaces__srv__GoToPoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(draw_shape_interfaces__srv__GoToPoint_Response);
    draw_shape_interfaces__srv__GoToPoint_Response * data =
      (draw_shape_interfaces__srv__GoToPoint_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!draw_shape_interfaces__srv__GoToPoint_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          draw_shape_interfaces__srv__GoToPoint_Response__fini(&data[i]);
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
    if (!draw_shape_interfaces__srv__GoToPoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
