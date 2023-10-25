/******************************************************************************
*                                                                             *
*   Program : Arduino Autonomous Car                                          *
*                                                                             *
*   FILE : sensorPanel.h                                                      *
*                                                                             *
*   Date : 28 / 09 / 2023                                                     *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
******************************************************************************/

#pragma once

#include "infraredSensor.h"
#include "ultrasonicSensor.h"
#include <Arduino.h>

enum direction {LEFT, RIGHT, FRONT};        // 0 - 1 - 2


class SensorPanel
{
public:
    SensorPanel(byte LUS_epin, byte LUS_tpin, byte RUS_epin, byte RUS_tpin, byte LIF_pin, byte LIF_lpin, byte RIF_pin, byte RIF_lpin, byte FIF_pin, byte FIF_lpin);

    void updateOutputSequence();
    
    UltrasonicSensor Ultrasonic_LEFT;    // (int echo_pin, int trig_pin)
    UltrasonicSensor Ultrasonic_RIGHT; 
    
    InfraredSensor Infrared_LEFT;   
    InfraredSensor Infrared_RIGHT;   
    InfraredSensor Infrared_FRONT;   

    int readUS(int m_direction);
    int readIF(int m_direction);
};
