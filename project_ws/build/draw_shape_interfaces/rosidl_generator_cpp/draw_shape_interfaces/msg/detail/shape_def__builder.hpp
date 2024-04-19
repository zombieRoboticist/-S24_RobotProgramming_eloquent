// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__BUILDER_HPP_
#define DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__BUILDER_HPP_

#include "draw_shape_interfaces/msg/detail/shape_def__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace draw_shape_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShapeDef_size
{
public:
  explicit Init_ShapeDef_size(::draw_shape_interfaces::msg::ShapeDef & msg)
  : msg_(msg)
  {}
  ::draw_shape_interfaces::msg::ShapeDef size(::draw_shape_interfaces::msg::ShapeDef::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::draw_shape_interfaces::msg::ShapeDef msg_;
};

class Init_ShapeDef_shape
{
public:
  Init_ShapeDef_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShapeDef_size shape(::draw_shape_interfaces::msg::ShapeDef::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_ShapeDef_size(msg_);
  }

private:
  ::draw_shape_interfaces::msg::ShapeDef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::draw_shape_interfaces::msg::ShapeDef>()
{
  return draw_shape_interfaces::msg::builder::Init_ShapeDef_shape();
}

}  // namespace draw_shape_interfaces

#endif  // DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__BUILDER_HPP_
