/*
 * Copyright © 2015  TELECOM Nancy
 *
 * This file is part of gps ROS module.
 * gps ROS module is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gps ROS module is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gps ROS module.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <ros/ros.h>
#include "fix.h"

/** Main node entry point. */
int main(int argc, char **argv)
{
	ros::init(argc, argv, "gps_fix_node");
	ros::NodeHandle node;
	ros::NodeHandle private_nh("~");

	// create conversion class, which subscribes to raw data
	gps_fix::GpsFix fix(node, private_nh);

	// handle callbacks until shut down
	ros::spin();

	return 0;
}
