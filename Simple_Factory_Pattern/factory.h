#pragma once

#ifndef FACTORY_H
#define FACTORY_H

#include "concrete_product.h"

class Factory
{
public:
	enum FOOD_TYPE
	{
		HAMBURGER,
		CHIPS,
		CHICKENROLLS
	};
	Food* CreateCar(FOOD_TYPE type)
	{
		Food* pFood = NULL;
		switch (type)
		{
		case FOOD_TYPE::HAMBURGER:
			pFood = new Hamburger();
			break;
		case FOOD_TYPE::CHIPS:
			pFood = new Chips();
			break;
		case FOOD_TYPE::CHICKENROLLS:
			pFood = new ChickenRolls();
			break;
		default:
			break;
		}
		return pFood;
	}
};

#endif