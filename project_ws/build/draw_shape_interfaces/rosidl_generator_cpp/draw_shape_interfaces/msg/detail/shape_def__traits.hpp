// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__TRAITS_HPP_
#define DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__TRAITS_HPP_

#include "draw_shape_interfaces/msg/detail/shape_def__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<draw_shape_interfaces::msg::ShapeDef>()
{
  return "draw_shape_interfaces::msg::ShapeDef";
}

template<>
inline const char * name<draw_shape_interfaces::msg::ShapeDef>()
{
  return "draw_shape_interfaces/msg/ShapeDef";
}

template<>
struct has_fixed_size<draw_shape_interfaces::msg::ShapeDef>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<draw_shape_interfaces::msg::ShapeDef>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<draw_shape_interfaces::msg::ShapeDef>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__TRAITS_HPP_
