#pragma once

#include <Arduino.h>

#define LEFT_LINE_SENSOR A3
#define RIGHT_LINE_SENSOR A4

class LineSensor
{
protected:
    uint8_t leftSensorPin = LEFT_LINE_SENSOR;
    uint8_t rightSensorPin = RIGHT_LINE_SENSOR;

    bool prevOnIntersection = false;

public:
    LineSensor(void) {}
    void Initialize(void);
    int16_t CalcError(void);
    bool CheckIntersection(void);
};