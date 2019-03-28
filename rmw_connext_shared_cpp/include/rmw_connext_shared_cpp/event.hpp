// Copyright 2015-2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RMW_CONNEXT_SHARED_CPP__EVENT_HPP_
#define RMW_CONNEXT_SHARED_CPP__EVENT_HPP_

#include "ndds_include.hpp"

#include "rmw/types.h"
#include "rmw/event.h"

#include "rmw_connext_shared_cpp/visibility_control.h"


rmw_ret_t
__rmw_publisher_event_init(
  const char * implementation_identifier,
  rmw_event_t * event,
  const rmw_publisher_t * publisher,
  const rmw_event_type_t event_type);

rmw_ret_t
__rmw_subscription_event_init(
  const char * implementation_identifier,
  rmw_event_t * event,
  const rmw_subscription_t * subscription,
  const rmw_event_type_t event_type);

/*
 * Take an event from the event handle.
 *
 * \param event_handle event object to take from
 * \param event_info event info object to write taken data into
 * \param taken boolean flag indicating if an event was taken or not
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
rmw_ret_t
__rmw_take_event(
  const char * implementation_identifier,
  const rmw_event_t * event_handle,
  void * event_info,
  bool * taken);

rmw_ret_t
__rmw_event_fini(
  const char * implementation_identifier,
  rmw_event_t * event);


#endif  // RMW_CONNEXT_SHARED_CPP__EVENT_HPP_
