cmake_minimum_required(VERSION 3.0.2)
project(check_log4cxx_requires_cxx17)

find_package(Log4cxx QUIET)
if(NOT LOG4CXX_LIBRARIES)
  find_library(LOG4CXX_LIBRARIES log4cxx)
endif()

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${LOG4CXX_INCLUDE_DIRS})
