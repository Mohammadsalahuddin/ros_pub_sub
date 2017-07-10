#include <ros/ros.h>
#include <sstream>
#include "perfomance_tests/SuperAwesome.h"

int main( int argc, char **argv ) {

    ros::init( argc, argv, "publisher_node" );

    ros::NodeHandle node;

    ros::Publisher pub = node.advertise<perfomance_tests::SuperAwesome>( "/pub_cpp", 100 );

    ros::Rate rate( 10 );

    while( ros::ok() ) {

        perfomance_tests::SuperAwesome message;

        message.text = "C++ Data Data";
        pub.publish( message );

        rate.sleep();
    }
}
