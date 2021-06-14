cmake_minimum_required(VERSION 3.18)

project(kydeps_test)

set(CMAKE_CXX_STANDARD 20)

include(kydeps/install/KyDeps.cmake)

include(gflags)
include(glog)
include(llvm)

string(REGEX REPLACE "[\\\\|/]" "[\\\\/]" HEADERS "${CMAKE_BINARY_DIR}/../.*")
set(CMAKE_CXX_CLANG_TIDY
        "${CLANG_TIDY}"
        "--header-filter=${HEADERS}"
        "--export-fixes=${CMAKE_BINARY_DIR}/clang-tidy.fixes")

add_executable(kydeps_test
        main.cpp
        Foo.cpp)
target_link_libraries(kydeps_test
        gflags
        glog::glog)
