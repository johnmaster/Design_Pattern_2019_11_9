#pragma once
#ifndef CONCRETE_IMPLEMENTOR_H

#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

using namespace std;
class Light :public IElectricalEquipment
{
public:
	virtual void PowerOn() override
	{
		std::cout << "Light is on." << std::endl;
	}
	virtual void PowerOff() override
	{
		cout << "Light is off." << endl;
	}
};

class Fan:public IElectricalEquipment
{
public:
	virtual void PowerOn() override
	{
		cout << "Fan is on." << endl;
	}
	virtual void PowerOff() override
	{
		cout << "Fan is off." << endl;
	}
};

#endif // !CONCRETE_IMPLEMENTOR_H
