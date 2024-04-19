// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__BUILDER_HPP_
#define DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__BUILDER_HPP_

#include "draw_shape_interfaces/srv/detail/go_to_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace draw_shape_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoToPoint_Request_desired_pose
{
public:
  Init_GoToPoint_Request_desired_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::draw_shape_interfaces::srv::GoToPoint_Request desired_pose(::draw_shape_interfaces::srv::GoToPoint_Request::_desired_pose_type arg)
  {
    msg_.desired_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::draw_shape_interfaces::srv::GoToPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::draw_shape_interfaces::srv::GoToPoint_Request>()
{
  return draw_shape_interfaces::srv::builder::Init_GoToPoint_Request_desired_pose();
}

}  // namespace draw_shape_interfaces


namespace draw_shape_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoToPoint_Response_ret
{
public:
  Init_GoToPoint_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::draw_shape_interfaces::srv::GoToPoint_Response ret(::draw_shape_interfaces::srv::GoToPoint_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::draw_shape_interfaces::srv::GoToPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::draw_shape_interfaces::srv::GoToPoint_Response>()
{
  return draw_shape_interfaces::srv::builder::Init_GoToPoint_Response_ret();
}

}  // namespace draw_shape_interfaces

#endif  // DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__BUILDER_HPP_
