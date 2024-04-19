// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__TRAITS_HPP_
#define DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__TRAITS_HPP_

#include "draw_shape_interfaces/srv/detail/go_to_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'desired_pose'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<draw_shape_interfaces::srv::GoToPoint_Request>()
{
  return "draw_shape_interfaces::srv::GoToPoint_Request";
}

template<>
inline const char * name<draw_shape_interfaces::srv::GoToPoint_Request>()
{
  return "draw_shape_interfaces/srv/GoToPoint_Request";
}

template<>
struct has_fixed_size<draw_shape_interfaces::srv::GoToPoint_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<draw_shape_interfaces::srv::GoToPoint_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<draw_shape_interfaces::srv::GoToPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<draw_shape_interfaces::srv::GoToPoint_Response>()
{
  return "draw_shape_interfaces::srv::GoToPoint_Response";
}

template<>
inline const char * name<draw_shape_interfaces::srv::GoToPoint_Response>()
{
  return "draw_shape_interfaces/srv/GoToPoint_Response";
}

template<>
struct has_fixed_size<draw_shape_interfaces::srv::GoToPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<draw_shape_interfaces::srv::GoToPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<draw_shape_interfaces::srv::GoToPoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<draw_shape_interfaces::srv::GoToPoint>()
{
  return "draw_shape_interfaces::srv::GoToPoint";
}

template<>
inline const char * name<draw_shape_interfaces::srv::GoToPoint>()
{
  return "draw_shape_interfaces/srv/GoToPoint";
}

template<>
struct has_fixed_size<draw_shape_interfaces::srv::GoToPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<draw_shape_interfaces::srv::GoToPoint_Request>::value &&
    has_fixed_size<draw_shape_interfaces::srv::GoToPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<draw_shape_interfaces::srv::GoToPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<draw_shape_interfaces::srv::GoToPoint_Request>::value &&
    has_bounded_size<draw_shape_interfaces::srv::GoToPoint_Response>::value
  >
{
};

template<>
struct is_service<draw_shape_interfaces::srv::GoToPoint>
  : std::true_type
{
};

template<>
struct is_service_request<draw_shape_interfaces::srv::GoToPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<draw_shape_interfaces::srv::GoToPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__TRAITS_HPP_
