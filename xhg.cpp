#include "ros/ros.h"
#include<geometry_msgs/Twist.h> //不知道干啥的，写上就行了
 
int main(int argc, char *argv[])//不知道为啥要加这个，抄上就完事了
{
    ros::init(argc, argv, "vel_ctrl");  //初始化
    
    ros::NodeHandle n;        
    
    ros::Publisher vel_pub = n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);
    
    ROS_INFO("draw_circle start...");
    
    while(ros::ok())
    {
        geometry_msgs::Twist vel_cmd; 
 
        vel_cmd.linear.x = 2.0;//线速度
        vel_cmd.linear.y = 0.0;  
        vel_cmd.linear.z = 0.0;
 
        vel_cmd.angular.x = 0;//角速度
        vel_cmd.angular.y = 0;
        vel_cmd.angular.z = 1.8;
        vel_pub.publish(vel_cmd); 
 
        ros::spinOnce();
    return 0;
}
