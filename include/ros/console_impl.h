/*
 * Copyright (c) 2013, Open Source Robotics Foundation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ROSCONSOLE_CONSOLE_IMPL_H
#define ROSCONSOLE_CONSOLE_IMPL_H

#include <ros/macros.h>
#include "ros/console.h"

// export interface functions shared by all impl instances in one single header
// since CMake would not help define custome flag like ROSCONSOLE_CONSOLE_IMPL_EXPORTS,
// the ROSCONSOLE_CONSOLE_IMPL_EXPORTS macro needs to be defined
// in the impl code (e.g. rosconsole_log4css.cpp) before including this header

// Import/export for windows dll's and visibility for gcc shared libraries.
#ifdef ROS_BUILD_SHARED_LIBS // ros is being built around shared libraries
  #ifdef ROSCONSOLE_CONSOLE_IMPL_EXPORTS // we are building a shared lib/dll
    #define ROSCONSOLE_CONSOLE_IMPL_DECL ROS_HELPER_EXPORT
  #else // we are using shared lib/dll
    #define ROSCONSOLE_CONSOLE_IMPL_DECL ROS_HELPER_IMPORT
  #endif
#else // ros is being built around static libraries
  #define ROSCONSOLE_CONSOLE_IMPL_DECL
#endif

// declare interface for rosconsole implementations
namespace ros
{
namespace console
{
namespace impl
{

ROSCONSOLE_CONSOLE_IMPL_DECL void initialize();

ROSCONSOLE_CONSOLE_IMPL_DECL void shutdown();

ROSCONSOLE_CONSOLE_IMPL_DECL void register_appender(LogAppender* appender);

ROSCONSOLE_CONSOLE_IMPL_DECL void deregister_appender(LogAppender* appender);

ROSCONSOLE_CONSOLE_IMPL_DECL void print(void* handle, ::ros::console::Level level, const char* str, const char* file, const char* function, int line);

ROSCONSOLE_CONSOLE_IMPL_DECL bool isEnabledFor(void* handle, ::ros::console::Level level);

ROSCONSOLE_CONSOLE_IMPL_DECL void* getHandle(const std::string& name);

ROSCONSOLE_CONSOLE_IMPL_DECL std::string getName(void* handle);

ROSCONSOLE_CONSOLE_IMPL_DECL bool get_loggers(std::map<std::string, levels::Level>& loggers);

ROSCONSOLE_CONSOLE_IMPL_DECL bool set_logger_level(const std::string& name, levels::Level level);

} // namespace impl
} // namespace console
} // namespace ros

#endif // ROSCONSOLE_CONSOLE_IMPL_H
