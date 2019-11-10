#pragma once

#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class AFactory
{
public:
	enum FACTORY_TYPE
	{
		BENZ_FACTORY,
		BMW_FACTORY,
		AUDI_FACTORY
	};

	virtual ICar* CreateCar() = 0;
	virtual IBike* CreateBike() = 0;
	static AFactory* CreateFactory(FACTORY_TYPE factory);

};

#endif