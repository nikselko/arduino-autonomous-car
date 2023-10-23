/******************************************************************************
*                                                                             *
*   Program : Arduino Autonomous Car                                          *
*                                                                             *
*   FILE : servoMotor.h                                                       *
*                                                                             *
*   Date : 28 / 09 / 2023                                                     *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
******************************************************************************/

#pragma once

#include <Servo.h>
#include <Arduino.h>

class ServoMotor
{
public:
	ServoMotor(byte m_pin);
 
  Servo servo;
  
	void rotate_left(int r_angle); 
	void rotate_right(int r_angle); 
	void reset();

	void init();
  
	byte pin;
	int pos;
};
