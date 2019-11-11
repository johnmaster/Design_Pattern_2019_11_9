#pragma once
#ifndef CONCRETE_DECORATOR_H
#define CONCRETE_DECORATOR_H

#include "decorator.h"

class Cream :public CondimentDecorator
{
public:
	Cream(IBeverage* beverage) :CondimentDecorator(beverage) {}
	string Name()
	{
		return m_pBeverage->Name() + " Cream";
	}
	double Cost()
	{
		return m_pBeverage->Cost() + 3.5;
	}
};

class Mocha :public CondimentDecorator
{
public:
	Mocha(IBeverage* beverage) :CondimentDecorator(beverage) {}
	string Name()
	{
		return m_pBeverage->Name() + " Mocha";
	}
	double Cost()
	{
		return m_pBeverage->Cost() + 2.0;
	}
};

class Syrup :public CondimentDecorator
{
public:
	Syrup(IBeverage* beverage) :CondimentDecorator(beverage) {}
	string Name()
	{
		return m_pBeverage->Name() + " Syrup";
	}
	double Cost()
	{
		return m_pBeverage->Cost() + 3.0;
	}
};

#endif // !CONCRETE_DECORATOR_H
