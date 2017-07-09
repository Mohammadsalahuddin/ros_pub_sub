#!/usr/bin/env python
import rospy
from perfomance_tests.msg import SuperAwesome

def callback(data):
    rospy.loginfo("Text from %s" % (data.text))

def sub_python():
    rospy.init_node('python_sub', anonymous=True)
    rospy.Subscriber("python_pub", SuperAwesome, callback)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    sub_python()
