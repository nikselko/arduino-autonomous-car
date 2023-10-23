/******************************************************************************
*                                                                             *
*   Program : Arduino Autonomous Car                                          *
*                                                                             *
*   FILE : ultrasonicSensor.h                                                 *
*                                                                             *
*   Date : 28 / 09 / 2023                                                     *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
******************************************************************************/

#pragma once

#include <Arduino.h>

class UltrasonicSensor
{
public:
	UltrasonicSensor(byte m_echo_pin, byte m_trig_pin);
	int get_distance();
	

	void init();

	byte echo_pin;
	byte trig_pin;

	long duration;
	int  distance;
};
