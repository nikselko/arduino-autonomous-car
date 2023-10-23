/******************************************************************************
*                                                                             *
*   Program : Arduino Autonomous Car                                          *
*                                                                             *
*   FILE : servoMotor.cpp                                                     *
*                                                                             *
*   Date : 28 / 09 / 2023                                                     *
*                                                                             *
*   Programmer : Nikita Seliverstov (nikselko)                                *
*                                                                             *
******************************************************************************/

#include "servoMotor.h"

ServoMotor::ServoMotor(byte m_pin)
{
    pin = m_pin;
    pos = 90;
}

void ServoMotor::init()
{
    servo.attach(pin);
}

void ServoMotor::rotate_left(int r_angle)
{
   servo.write(pos + r_angle);
}

void ServoMotor::rotate_right(int r_angle)
{
    servo.write(pos - r_angle);
}

void ServoMotor::reset()
{
    pos = 90;
    servo.write(pos);
}
