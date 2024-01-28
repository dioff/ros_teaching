#include "ros/ros.h"

int main(int argc, char *argv[])
{
    // 初始化ROS节点
    ros::init(argc, argv, "hello");
    // 创建ROS节点句柄
    ros::NodeHandle nh;
    // 在控制台输出hello world
    ROS_INFO("hello world");
    ROS_INFO("NNNN");
    return 0;
}