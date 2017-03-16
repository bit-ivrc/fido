#include <ros/ros.h>

int main(int argc, char **argv) {
    // Initialize node and publisher.
    ros::init(argc, argv, "#PROJECT#_node");
    ros::NodeHandle nh("~");
    // Create publishers and subscribers
    // ros::Publisher publisher = nh.advertise<geometry_msgs::PoseStamped>("pose_publisher", 1, true);

    // Publisher in a loop.
    ros::Rate rate(10.0);
    while (nh.ok()) {
        // Add data to grid map.
        ros::Time time = ros::Time::now();

	// do something 
	// ....
	        
        // Publish grid map.
        // publisher.publish(pose_msg);
        // ROS_INFO_THROTTLE(10, "ROS pose (timestamp %f) published.", pose_msg.header.stamp.toSec());

	
        // Wait for next cycle.
	ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
