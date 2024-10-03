// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tortoisebot_waypoints_interface:action/WaypointAction.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__BUILDER_HPP_
#define TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__BUILDER_HPP_

#include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_Goal_position
{
public:
  Init_WaypointAction_Goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_Goal position(::tortoisebot_waypoints_interface::action::WaypointAction_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_Goal>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_Goal_position();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_Result_success
{
public:
  Init_WaypointAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_Result success(::tortoisebot_waypoints_interface::action::WaypointAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_Result>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_Result_success();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_Feedback_state
{
public:
  explicit Init_WaypointAction_Feedback_state(::tortoisebot_waypoints_interface::action::WaypointAction_Feedback & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_Feedback state(::tortoisebot_waypoints_interface::action::WaypointAction_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_Feedback msg_;
};

class Init_WaypointAction_Feedback_position
{
public:
  Init_WaypointAction_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAction_Feedback_state position(::tortoisebot_waypoints_interface::action::WaypointAction_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WaypointAction_Feedback_state(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_Feedback>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_Feedback_position();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_SendGoal_Request_goal
{
public:
  explicit Init_WaypointAction_SendGoal_Request_goal(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request goal(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request msg_;
};

class Init_WaypointAction_SendGoal_Request_goal_id
{
public:
  Init_WaypointAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAction_SendGoal_Request_goal goal_id(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaypointAction_SendGoal_Request_goal(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Request>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_SendGoal_Request_goal_id();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_SendGoal_Response_stamp
{
public:
  explicit Init_WaypointAction_SendGoal_Response_stamp(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response stamp(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response msg_;
};

class Init_WaypointAction_SendGoal_Response_accepted
{
public:
  Init_WaypointAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAction_SendGoal_Response_stamp accepted(::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_WaypointAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_SendGoal_Response>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_SendGoal_Response_accepted();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_GetResult_Request_goal_id
{
public:
  Init_WaypointAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request goal_id(::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Request>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_GetResult_Request_goal_id();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_GetResult_Response_result
{
public:
  explicit Init_WaypointAction_GetResult_Response_result(::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response result(::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response msg_;
};

class Init_WaypointAction_GetResult_Response_status
{
public:
  Init_WaypointAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAction_GetResult_Response_result status(::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WaypointAction_GetResult_Response_result(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_GetResult_Response>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_GetResult_Response_status();
}

}  // namespace tortoisebot_waypoints_interface


namespace tortoisebot_waypoints_interface
{

namespace action
{

namespace builder
{

class Init_WaypointAction_FeedbackMessage_feedback
{
public:
  explicit Init_WaypointAction_FeedbackMessage_feedback(::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage feedback(::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage msg_;
};

class Init_WaypointAction_FeedbackMessage_goal_id
{
public:
  Init_WaypointAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAction_FeedbackMessage_feedback goal_id(::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaypointAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints_interface::action::WaypointAction_FeedbackMessage>()
{
  return tortoisebot_waypoints_interface::action::builder::Init_WaypointAction_FeedbackMessage_goal_id();
}

}  // namespace tortoisebot_waypoints_interface

#endif  // TORTOISEBOT_WAYPOINTS_INTERFACE__ACTION__DETAIL__WAYPOINT_ACTION__BUILDER_HPP_
