# IMU binary to CSV tool

This tool is intended to convert saved file from ROS imu_save module to CSV file format.

## How to compil :
```bash
make
```

## How to use :
```bash
./imuBinToCsv /path/to/file.bin
```
The new file will be : /path/to/file.bin.csv
**Be aware that no check is performed to verify the input file is correct!**
