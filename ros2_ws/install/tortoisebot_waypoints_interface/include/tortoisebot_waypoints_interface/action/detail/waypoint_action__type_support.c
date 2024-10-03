// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tortoisebot_waypoints_interface:action/WaypointAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
#include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
#include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_Goal__init(message_memory);
}

void WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_Goal, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_Goal",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_Goal),
  WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_member_array,  // message members
  WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_type_support_handle = {
  0,
  &WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Goal)() {
  WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_type_support_handle.typesupport_identifier) {
    WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_Goal__rosidl_typesupport_introspection_c__WaypointAction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_Result__init(message_memory);
}

void WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_Result",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_Result),
  WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_member_array,  // message members
  WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_type_support_handle = {
  0,
  &WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Result)() {
  if (!WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_type_support_handle.typesupport_identifier) {
    WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_Result__rosidl_typesupport_introspection_c__WaypointAction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `position`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `position`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_Feedback__init(message_memory);
}

void WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_Feedback, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_Feedback",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_Feedback),
  WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_member_array,  // message members
  WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_type_support_handle = {
  0,
  &WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Feedback)() {
  WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_type_support_handle.typesupport_identifier) {
    WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_Feedback__rosidl_typesupport_introspection_c__WaypointAction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "tortoisebot_waypoints_interface/action/waypoint_action.h"
// Member `goal`
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request__init(message_memory);
}

void WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Request),
  WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_member_array,  // message members
  WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_type_support_handle = {
  0,
  &WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Request)() {
  WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Goal)();
  if (!WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response__init(message_memory);
}

void WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_SendGoal_Response),
  WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_member_array,  // message members
  WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_type_support_handle = {
  0,
  &WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Response)() {
  WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_members = {
  "tortoisebot_waypoints_interface__action",  // service namespace
  "WaypointAction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_type_support_handle = {
  0,
  &tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal)() {
  if (!tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_type_support_handle.typesupport_identifier) {
    tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_SendGoal_Response)()->data;
  }

  return &tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request__init(message_memory);
}

void WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Request),
  WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_member_array,  // message members
  WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_type_support_handle = {
  0,
  &WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Request)() {
  WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_GetResult_Request__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "tortoisebot_waypoints_interface/action/waypoint_action.h"
// Member `result`
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response__init(message_memory);
}

void WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_GetResult_Response),
  WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_member_array,  // message members
  WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_type_support_handle = {
  0,
  &WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Response)() {
  WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Result)();
  if (!WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_GetResult_Response__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_members = {
  "tortoisebot_waypoints_interface__action",  // service namespace
  "WaypointAction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_type_support_handle = {
  0,
  &tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult)() {
  if (!tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_type_support_handle.typesupport_identifier) {
    tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_GetResult_Response)()->data;
  }

  return &tortoisebot_waypoints_interface__action__detail__waypoint_action__rosidl_typesupport_introspection_c__WaypointAction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__functions.h"
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "tortoisebot_waypoints_interface/action/waypoint_action.h"
// Member `feedback`
// already included above
// #include "tortoisebot_waypoints_interface/action/detail/waypoint_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage__init(message_memory);
}

void WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_fini_function(void * message_memory)
{
  tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_members = {
  "tortoisebot_waypoints_interface__action",  // message namespace
  "WaypointAction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints_interface__action__WaypointAction_FeedbackMessage),
  WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_member_array,  // message members
  WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_type_support_handle = {
  0,
  &WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_FeedbackMessage)() {
  WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints_interface, action, WaypointAction_Feedback)();
  if (!WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaypointAction_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointAction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
