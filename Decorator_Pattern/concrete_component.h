#pragma once
#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "component.h"

class HouseBlend :public IBeverage
{
public:
	string Name()
	{
		return "HouseBlend";
	}
	double Cost()
	{
		return 30.0;
	}
};

class DarkRoast :public IBeverage
{
public:
	string Name()
	{
		return "DarkRoast";
	}
	double Cost()
	{
		return 28.5;
	}
};

#endif // ! CONCRETE_COMPONENT_H
