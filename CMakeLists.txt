cmake_minimum_required(VERSION 3.18)

project(kydeps_test)

set(CMAKE_CXX_STANDARD 20)

include(kydeps/kydeps.cmake)
kydeps(google/log google/flags)

add_executable(kydeps_test main.cpp)
target_link_libraries(kydeps_test
        gflags
        glog::glog)
