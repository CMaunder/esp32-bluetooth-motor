#pragma once

class Accelerometer {
    public:
    void update(sensors_event_t *accel, sensors_event_t *gyro,
                                sensors_event_t *temp);
    void initialise_accel();
    void print();
};


