#!/usr/bin/env python
import rospy
from perfomance_tests.msg import SuperAwesome

def pub_python():
    pub = rospy.Publisher('python_pub', SuperAwesome)
    rospy.init_node('pub_python', anonymous=True)
    r = rospy.Rate(10) 
    msg = SuperAwesome()
    msg.text = "SuperAwesome.msg-> DATA DATA"

    while not rospy.is_shutdown():
        # rospy.loginfo(msg)
        pub.publish(msg)
        r.sleep()

if __name__ == '__main__':
    try:
        pub_python()
    except rospy.ROSInterruptException: pass

