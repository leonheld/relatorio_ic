bool        mpu6050_test        ();
bool        mpu6050_writeByte   (char reg, char value);
int8_t      mpu6050_readByte    (char reg);
bool        mpu6050_reset       ();
bool        mpu6050_configAccel (mpu6050_range_t range);
bool        mpu6050_configGyro  (mpu6050_dps_t range);
uint16_t    getAccel            (mpu6050_axis axis);
uint16_t    getGyro             (mpu6050_axis axis);
