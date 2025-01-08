set(srcs
        "main.c"
        "sketch.cpp"
        "motor.cpp"
        "accelerometer.cpp"
    )

set(requires 
        "bluepad32" 
        "bluepad32_arduino" 
        "arduino" 
        "btstack" 
        "Adafruit_SSD1306" 
        "Adafruit-GFX-Library" 
        "Adafruit_BusIO"
        "Adafruit_MPU6050"
        "Adafruit_Sensor"
    )

idf_component_register(SRCS "${srcs}"
                    INCLUDE_DIRS "."
                    REQUIRES "${requires}")
