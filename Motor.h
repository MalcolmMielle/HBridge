#ifndef MOTOR_ARDUINO_H
#define MOTOR_ARDUINO_H

#include <Arduino.h>

class Motor{
protected:
	int _enablePin;
	int _logic1;
	int _logic2;
	
public : 
	Motor(int en, int lo1, int lo2) : _enablePin(en), _logic1(lo1), _logic2((lo2) ){}
	
	void goFront();
	void goBack();
	void stop();
	
};

void Motor::goBack()
{
	digitalWrite(_logic1, LOW);   
    digitalWrite(_logic2, HIGH);
}

void Motor::goFront()
{
	digitalWrite(_logic1, HIGH);   
    digitalWrite(_logic2, LOW);
}

void Motor::stop()
{
	digitalWrite(_logic1, LOW);   
    digitalWrite(_logic2, LOW);
}



#endif