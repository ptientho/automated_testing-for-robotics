// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tortoisebot_waypoints_interface:action/WaypointAction.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__STRUCT_HPP_
#define TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Goal __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_Goal_
{
  using Type = WaypointAction_Goal_<ContainerAllocator>;

  explicit WaypointAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    (void)_init;
  }

  explicit WaypointAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Goal
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Goal
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_Goal_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_Goal_

// alias to use template instance with default allocator
using WaypointAction_Goal =
  tortoisebot_waypoints_interface::action::WaypointAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Result __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_Result_
{
  using Type = WaypointAction_Result_<ContainerAllocator>;

  explicit WaypointAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit WaypointAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Result
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Result
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_Result_

// alias to use template instance with default allocator
using WaypointAction_Result =
  tortoisebot_waypoints_interface::action::WaypointAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Feedback __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_Feedback_
{
  using Type = WaypointAction_Feedback_<ContainerAllocator>;

  explicit WaypointAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit WaypointAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Feedback
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_Feedback
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_Feedback_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_Feedback_

// alias to use template instance with default allocator
using WaypointAction_Feedback =
  tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_SendGoal_Request_
{
  using Type = WaypointAction_SendGoal_Request_<ContainerAllocator>;

  explicit WaypointAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit WaypointAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tortoisebot_waypoints_interface::action::WaypointAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_SendGoal_Request_

// alias to use template instance with default allocator
using WaypointAction_SendGoal_Request =
  tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_SendGoal_Response_
{
  using Type = WaypointAction_SendGoal_Response_<ContainerAllocator>;

  explicit WaypointAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit WaypointAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_SendGoal_Response_

// alias to use template instance with default allocator
using WaypointAction_SendGoal_Response =
  tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface

namespace tortoisebot_waypoints_interface
{

namespace action
{

struct WaypointAction_SendGoal
{
  using Request = tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request;
  using Response = tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response;
};

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_GetResult_Request_
{
  using Type = WaypointAction_GetResult_Request_<ContainerAllocator>;

  explicit WaypointAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit WaypointAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_GetResult_Request_

// alias to use template instance with default allocator
using WaypointAction_GetResult_Request =
  tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_GetResult_Response_
{
  using Type = WaypointAction_GetResult_Response_<ContainerAllocator>;

  explicit WaypointAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit WaypointAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tortoisebot_waypoints_interface::action::WaypointAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_GetResult_Response_

// alias to use template instance with default allocator
using WaypointAction_GetResult_Response =
  tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface

namespace tortoisebot_waypoints_interface
{

namespace action
{

struct WaypointAction_GetResult
{
  using Request = tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request;
  using Response = tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response;
};

}  // namespace action

}  // namespace tortoisebot_waypoints_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage __declspec(deprecated)
#endif

namespace tortoisebot_waypoints_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointAction_FeedbackMessage_
{
  using Type = WaypointAction_FeedbackMessage_<ContainerAllocator>;

  explicit WaypointAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit WaypointAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tortoisebot_waypoints_interface::action::WaypointAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage
    std::shared_ptr<tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointAction_FeedbackMessage_

// alias to use template instance with default allocator
using WaypointAction_FeedbackMessage =
  tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tortoisebot_waypoints_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tortoisebot_waypoints_interface
{

namespace action
{

struct WaypointAction
{
  /// The goal message defined in the action definition.
  using Goal = tortoisebot_waypoints_interface::action::WaypointAction_Goal;
  /// The result message defined in the action definition.
  using Result = tortoisebot_waypoints_interface::action::WaypointAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tortoisebot_waypoints_interface::action::WaypointAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tortoisebot_waypoints_interface::action::WaypointAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tortoisebot_waypoints_interface::action::WaypointAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct WaypointAction WaypointAction;

}  // namespace action

}  // namespace tortoisebot_waypoints_interface

#endif  // TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__STRUCT_HPP_
