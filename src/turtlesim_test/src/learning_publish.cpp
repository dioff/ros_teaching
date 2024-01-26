# include "ros/ros.h"
# include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "velocity_publisher");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 100);
    ros::Rate r(10);
    int count = 0;

    while (ros::ok())
    {
        geometry_msgs::Twist vel_msg;
        vel_msg.linear.x = 0.5;
        vel_msg.angular.z = 0.2;

        pub.publish(vel_msg);
        ROS_INFO("command[%0.2f m/s , %0.2f rad/s]", vel_msg.linear.x, vel_msg.angular.z);
        r.sleep();
    }
    return 0;
}