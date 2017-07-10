# ros_pub_sub
A ROS Publisher and Subcriber
# Make and test
Under the ros_ws folder, run
catkin_make </br>
source ./devel/setup.bash </br>
Then test your new publisher and new subscriber In a new terminal </br>
roscore </br>
In another terminal </br>
rosrun perfomance_tests pub_python.py </br>
In another terminal </br>
rosrun perfomance_tests sub_python.py </br>
# For C++ node
roscore </br>
In another terminal </br>
rosrun perfomance_tests perfomance_tests </br>
In another terminal </br>
rosrun perfomance_tests erfomance_sub </br>
Your will see what the publisher published will be showed by the subscriber. Enjoy!
