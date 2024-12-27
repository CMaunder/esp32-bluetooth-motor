#include <Arduino.h>
#include "sdkconfig.h"

#include "motor.h"

void motorControlTest() {
    // Motor 1 test
    digitalWrite(MOTOR_1_PIN_11, HIGH);
    digitalWrite(MOTOR_1_PIN_21, LOW);

    for (int i = 0; i < 150; i++) {
        ledcWrite(MOTOR_1_ENABLE1, i);
        delay(20);
    }
    digitalWrite(MOTOR_1_PIN_11, LOW);
    digitalWrite(MOTOR_1_PIN_21, HIGH);

    for (int i = 0; i < 150; i++) {
        ledcWrite(MOTOR_1_ENABLE1, i);
        delay(20);
    }

    digitalWrite(MOTOR_1_PIN_11, LOW);
    digitalWrite(MOTOR_1_PIN_21, LOW);
    // Motor 2 test
    digitalWrite(MOTOR_2_PIN_11, HIGH);
    digitalWrite(MOTOR_2_PIN_21, LOW);

    for (int i = 0; i < 150; i++) {
        ledcWrite(MOTOR_2_ENABLE1, i);
        delay(20);
    }

    digitalWrite(MOTOR_2_PIN_11, LOW);
    digitalWrite(MOTOR_2_PIN_21, HIGH);

    for (int i = 0; i < 150; i++) {
        ledcWrite(MOTOR_2_ENABLE1, i);
        delay(20);
    }

    digitalWrite(MOTOR_2_PIN_11, LOW);
    digitalWrite(MOTOR_2_PIN_21, LOW);
}  