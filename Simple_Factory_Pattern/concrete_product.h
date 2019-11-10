#pragma once

#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"

class Hamburger : public Food
{
public:
	string Name()
	{
		return "Hamburger";
	}
};

class Chips : public Food
{
public :
	string Name()
	{
		return "Chips";
	}
};

class ChickenRolls : public Food
{
public:
	string Name()
	{
		return "ChickenRolls";
	}
};


#endif
