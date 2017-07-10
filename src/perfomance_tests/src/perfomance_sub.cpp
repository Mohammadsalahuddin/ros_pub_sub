#include <ros/ros.h>
#include <sstream>
#include "perfomance_tests/SuperAwesome.h"

void Callback(const perfomance_tests::SuperAwesome& subsMsg)
{
  std::cout<< "Received Data: " << subsMsg.text << std::endl;
}



int main( int argc, char **argv ) {

    ros::init( argc, argv, "subcriber_node" );

    ros::NodeHandle node;

    ros::Subscriber sub = node.subscribe("/pub_cpp", 100, Callback);

    ros::spin();

  return 0;
}
