cmake_minimum_required(VERSION 3.12) # version can be different

project(leetcode_cpp_project) #name of your project

set(CMAKE_CXX_STANDARD 11) # GoogleTest requires at least C++11

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()

include(GoogleTest)

add_executable(
    add_binary_test
    src/add-binary.test.cc
)

add_executable(
    two_sum_test
    src/1-two-sum/two-sum.test.cc
)

target_link_libraries(
    add_binary_test
    PRIVATE gtest_main
)

target_link_libraries(
    two_sum_test
    PRIVATE gtest_main
)



gtest_discover_tests(add_binary_test)
gtest_discover_tests(two_sum_test)


# add_subdirectory(libs/googletest) # add googletest subdirectory

# include_directories(libs/googletest/include) # this is so we can #include <gtest/gtest.h>

# add_executable(mytests mytests.cpp) # add this executable

# target_link_libraries(mytests PRIVATE gtest) # link google test to this executable