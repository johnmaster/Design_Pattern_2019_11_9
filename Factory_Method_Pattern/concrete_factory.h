#pragma once
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class HamburgerFactory :public AFactory
{
public:
	Food* CreateFood()
	{
		return new Hamburger();
	}
};

class ChipsFactory :public AFactory
{
public:
	Food* CreateFood()
	{
		return new Chips();
	}
};

class ChickenRollsFactory :public AFactory
{
public:
	Food* CreateFood()
	{
		return new ChickenRolls();
	}
};

#endif

