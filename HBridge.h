#ifndef HBRIDGE_ARDUINO_H
#define HBRIDGE_ARDUINO_H

#include <Arduino.h>
#include "Motor.h"

class HBridge{
protected : 
	Motor _motor_left;
	Motor _motor_right;
	
public :
	HBridge(int en1, int lo1, int lo2, int en_m2, int lo1_m2, int lo2_m2) : _motor_left(en1, lo1, lo2), _motor_right(en_m2, lo1_m2, lo2_m2) {};	
	
	void goForward();
	void stop();
	void goLeft();
	void goRight();
};

void HBridge::goForward()
{
	_motor_left.goFront();
	_motor_right.goFront();
}

void HBridge::goLeft()
{
	_motor_left.goBack();
	_motor_right.goFront();
}

void HBridge::goRight()
{
	_motor_left.goFront();
	_motor_right.goBack();
}

void HBridge::stop()
{
	_motor_left.stop();
	_motor_right.stop();
}



#endif