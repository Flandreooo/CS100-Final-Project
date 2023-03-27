cmake_minimum_required(VERSION 3.20)

project(unit-test)

add_subdirectory(Tests/googletest)

ADD_EXECUTABLE(testingFriend
    testFriend.cpp
    friendly.cpp
    ../Character/character.cpp
)

TARGET_LINK_LIBRARIES(testingFriend gmock gtest gtest_main)
TARGET_COMPILE_DEFINITIONS(testingFriend PRIVATE gtest_disable_pthreads=ON)