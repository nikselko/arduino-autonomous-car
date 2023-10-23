/******************************************************************************
*                                                                             *
*   Program : Arduino Autonomous Car                                          *
*                                                                             *
*   FILE : infraredSensor.h                                                   *
*                                                                             *
*   Date : 28 / 09 / 2023                                                     *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
******************************************************************************/

#pragma once

#include <Arduino.h>

class InfraredSensor
{
public:
	InfraredSensor(byte m_pin, byte m_led_pin);

	void display_led();
	int get_state();
  int read_pin();
	
	void init();
  
	byte pin;
	byte led_pin;
	int state;
};
