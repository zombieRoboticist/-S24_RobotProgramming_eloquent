// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "draw_shape_interfaces/srv/detail/go_to_point__rosidl_typesupport_introspection_c.h"
#include "draw_shape_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "draw_shape_interfaces/srv/detail/go_to_point__functions.h"
#include "draw_shape_interfaces/srv/detail/go_to_point__struct.h"


// Include directives for member types
// Member `desired_pose`
#include "geometry_msgs/msg/point.h"
// Member `desired_pose`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  draw_shape_interfaces__srv__GoToPoint_Request__init(message_memory);
}

void GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_fini_function(void * message_memory)
{
  draw_shape_interfaces__srv__GoToPoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_member_array[1] = {
  {
    "desired_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces__srv__GoToPoint_Request, desired_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_members = {
  "draw_shape_interfaces__srv",  // message namespace
  "GoToPoint_Request",  // message name
  1,  // number of fields
  sizeof(draw_shape_interfaces__srv__GoToPoint_Request),
  GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_member_array,  // message members
  GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_type_support_handle = {
  0,
  &GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_draw_shape_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Request)() {
  GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_type_support_handle.typesupport_identifier) {
    GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_Request__rosidl_typesupport_introspection_c__GoToPoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "draw_shape_interfaces/srv/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "draw_shape_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "draw_shape_interfaces/srv/detail/go_to_point__functions.h"
// already included above
// #include "draw_shape_interfaces/srv/detail/go_to_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  draw_shape_interfaces__srv__GoToPoint_Response__init(message_memory);
}

void GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_fini_function(void * message_memory)
{
  draw_shape_interfaces__srv__GoToPoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(draw_shape_interfaces__srv__GoToPoint_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_members = {
  "draw_shape_interfaces__srv",  // message namespace
  "GoToPoint_Response",  // message name
  1,  // number of fields
  sizeof(draw_shape_interfaces__srv__GoToPoint_Response),
  GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_member_array,  // message members
  GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_type_support_handle = {
  0,
  &GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_draw_shape_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Response)() {
  if (!GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_type_support_handle.typesupport_identifier) {
    GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_Response__rosidl_typesupport_introspection_c__GoToPoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "draw_shape_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "draw_shape_interfaces/srv/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_members = {
  "draw_shape_interfaces__srv",  // service namespace
  "GoToPoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_Request_message_type_support_handle,
  NULL  // response message
  // draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_type_support_handle = {
  0,
  &draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_draw_shape_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint)() {
  if (!draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_type_support_handle.typesupport_identifier) {
    draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, draw_shape_interfaces, srv, GoToPoint_Response)()->data;
  }

  return &draw_shape_interfaces__srv__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_service_type_support_handle;
}
