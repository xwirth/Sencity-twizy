/*
 * Copyright © 2015  TELECOM Nancy
 *
 * This file is part of imu ROS module.
 * imu ROS module is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * imu ROS module is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with imu ROS module.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <ros/ros.h>
#include "driver.h"

int main(int argc, char** argv)
{
	ros::init(argc, argv, "imu_node");
	ros::NodeHandle node;
	ros::NodeHandle private_nh("~");

	// start the driver
	imu_driver::ImuDriver dvr(node, private_nh);

	// loop until shut down or end of file
	while(ros::ok() && dvr.poll())
	{
		ros::spinOnce();
	}

	return 0;
}
