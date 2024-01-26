# CMakeLists.txt文件必须以CMake的版本开头。下面表示的是Catkin需要2.8.3或更高的版本
cmake_minimum_required(VERSION 3.0.2)
# 继而需要指定CMake工程名，一般取作包名
# 在CMake中可以使用${PROJECT——NAME}来应用项目名称
project(test)

# find_package指令用来构建项目过程中依赖了哪些其他的包
# 在ROS中，catkin必备依赖所以我们必须协商catkin REQUIRED
# 在此基础上我们还需要依赖其他包（或者组件），我们就在上述包后面继续添加组件名即可
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  tf
)
# catkin_package()是一个catkin提供的CMake宏，用于将catkin特定的信息输出到构建系统中，用于生成pkg配置文件以及CMake文件
# 这个命令必须在add_library()\add_executabel()之前调用，该函数有五个可选参数
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

# 使用add_executable()函数构建可执行目标
add_executable(helloworld src/helloworld.cpp)
target_link_libraries(helloworld ${catkin_LIBRARIES})
