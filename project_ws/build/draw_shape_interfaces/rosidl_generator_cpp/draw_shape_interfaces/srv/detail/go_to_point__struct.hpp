// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from draw_shape_interfaces:srv/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_HPP_
#define DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'desired_pose'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Request __declspec(deprecated)
#endif

namespace draw_shape_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Request_
{
  using Type = GoToPoint_Request_<ContainerAllocator>;

  explicit GoToPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_pose(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _desired_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _desired_pose_type desired_pose;

  // setters for named parameter idiom
  Type & set__desired_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->desired_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Request
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Request
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Request_ & other) const
  {
    if (this->desired_pose != other.desired_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Request_

// alias to use template instance with default allocator
using GoToPoint_Request =
  draw_shape_interfaces::srv::GoToPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace draw_shape_interfaces


#ifndef _WIN32
# define DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Response __declspec(deprecated)
#endif

namespace draw_shape_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Response_
{
  using Type = GoToPoint_Response_<ContainerAllocator>;

  explicit GoToPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0;
    }
  }

  explicit GoToPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = 0;
    }
  }

  // field types and members
  using _ret_type =
    int8_t;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const int8_t & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Response
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__draw_shape_interfaces__srv__GoToPoint_Response
    std::shared_ptr<draw_shape_interfaces::srv::GoToPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Response_

// alias to use template instance with default allocator
using GoToPoint_Response =
  draw_shape_interfaces::srv::GoToPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace draw_shape_interfaces

namespace draw_shape_interfaces
{

namespace srv
{

struct GoToPoint
{
  using Request = draw_shape_interfaces::srv::GoToPoint_Request;
  using Response = draw_shape_interfaces::srv::GoToPoint_Response;
};

}  // namespace srv

}  // namespace draw_shape_interfaces

#endif  // DRAW_SHAPE_INTERFACES__SRV__DETAIL__GO_TO_POINT__STRUCT_HPP_
