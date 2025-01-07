#include <Arduino.h>
#include "sdkconfig.h"

#include "motor.h"

void Motor::forward(int percent) {
    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, LOW);
    ledcWrite(pwm_pin, percent);
}

void Motor::reverse(int percent) {
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, HIGH);
    ledcWrite(pwm_pin, percent);
}

void Motor::stop() {
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, LOW);
    ledcWrite(pwm_pin, 0);
}

void Motor::test() {
    for (int i = 0; i < 150; i++) {
        this->forward(i);
        delay(20);
    }
    this->stop();
    for (int i = 0; i < 150; i++) {
        this->reverse(i);
        delay(20);
    }
    this->stop();
}
