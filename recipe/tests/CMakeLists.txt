cmake_minimum_required(VERSION 3.7)

project(osg2vsg_consumer LANGUAGES CXX)

include(CTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(osg2vsg CONFIG REQUIRED)

add_executable(osg2vsg_consumer main.cpp)
target_link_libraries(osg2vsg_consumer PRIVATE osg2vsg::osg2vsg)
add_test(NAME osg2vsg_consumer COMMAND osg2vsg_consumer)
