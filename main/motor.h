#pragma once

const int MOTOR_1_PIN_11 {27};
const int MOTOR_1_PIN_21 {26};
const int MOTOR_1_ENABLE1 {14};

const int MOTOR_2_PIN_11 {33};
const int MOTOR_2_PIN_21 {32};
const int MOTOR_2_ENABLE1 {25};

// PWM properties
const int PWM_CHANNEL_01 {0};
const int PWM_CHANNEL_11 {1};

class Motor {
private:
    int pin_1;
    int pin_2;
    int pwm_pin;
    int pwm_channel;
    const int PWM_FREQ {500};
    const int PWM_RESOLUTION {8};
public:
    Motor(int pin_1, int pin_2, int pwm_pin, int pwm_channel) {
        this->pin_1 = pin_1;
        this->pin_2 = pin_2;
        this->pwm_pin = pwm_pin;
        this->pwm_channel = pwm_channel;

        pinMode(pin_1, OUTPUT);
        pinMode(pin_2, OUTPUT);
        pinMode(pwm_pin, OUTPUT);
        ledcAttachChannel(pwm_pin, PWM_FREQ, PWM_RESOLUTION, pwm_channel);
    }

    void forward(int percent);
    void reverse(int percent);
    void stop();
    void test();
};
