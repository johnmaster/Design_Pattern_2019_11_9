#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
using namespace std;

class IBeverage
{
public:
	virtual string Name() = 0;
	virtual double Cost() = 0;
};

#endif // !COMPONENT_H
