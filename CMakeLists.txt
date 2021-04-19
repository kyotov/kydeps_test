cmake_minimum_required(VERSION 3.18)

project(kydeps_test)

set(CMAKE_CXX_STANDARD 20)

include(kydeps/KyDeps.cmake)
KyDeps(CACHED
        DEPENDS gflags glog
        EXPECTED_SHA256 f4a3efc5d13a420d75aa64d319ae9ef14fe26420872bd86664666e05a323cf0d)

add_executable(kydeps_test main.cpp)
target_link_libraries(kydeps_test
        gflags
        glog::glog)
