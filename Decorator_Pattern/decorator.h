#pragma once
#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class CondimentDecorator :public IBeverage
{
protected:
	IBeverage* m_pBeverage;
public:
	CondimentDecorator(IBeverage* beverage) :m_pBeverage(beverage) {}
	string Name()
	{
		return m_pBeverage->Name();
	}
	double Cost()
	{
		return m_pBeverage->Cost();
	}
};
#endif // !DECORATOR_H
