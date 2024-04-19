// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from draw_shape_interfaces:msg/ShapeDef.idl
// generated code does not contain a copyright notice

#ifndef DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_HPP_
#define DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__draw_shape_interfaces__msg__ShapeDef __attribute__((deprecated))
#else
# define DEPRECATED__draw_shape_interfaces__msg__ShapeDef __declspec(deprecated)
#endif

namespace draw_shape_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShapeDef_
{
  using Type = ShapeDef_<ContainerAllocator>;

  explicit ShapeDef_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape = "";
      this->size = 0;
    }
  }

  explicit ShapeDef_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape = "";
      this->size = 0;
    }
  }

  // field types and members
  using _shape_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _shape_type shape;
  using _size_type =
    uint8_t;
  _size_type size;

  // setters for named parameter idiom
  Type & set__shape(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__size(
    const uint8_t & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> *;
  using ConstRawPtr =
    const draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__draw_shape_interfaces__msg__ShapeDef
    std::shared_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__draw_shape_interfaces__msg__ShapeDef
    std::shared_ptr<draw_shape_interfaces::msg::ShapeDef_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShapeDef_ & other) const
  {
    if (this->shape != other.shape) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShapeDef_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShapeDef_

// alias to use template instance with default allocator
using ShapeDef =
  draw_shape_interfaces::msg::ShapeDef_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace draw_shape_interfaces

#endif  // DRAW_SHAPE_INTERFACES__MSG__DETAIL__SHAPE_DEF__STRUCT_HPP_
