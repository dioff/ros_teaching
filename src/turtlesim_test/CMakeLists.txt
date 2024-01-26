cmake_minimum_required(VERSION 3.0.2)
project(turtlesim_test)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  rospy
  std_msgs
  turtlesim
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test
#  CATKIN_DEPENDS roscpp rospy std_msgs tf
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(learning_publish src/learning_publish.cpp)
target_link_libraries(learning_publish ${catkin_LIBRARIES})