#pragma once
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class BenzFactory :public AFactory
{
public:
	ICar* CreateCar()
	{
		return new BenzCar();
	}
	IBike* CreateBike()
	{
		return new BenzBike();
	}
};

class BmwFactory :public AFactory
{
public:
	ICar* CreateCar()
	{
		return new BmwCar();
	}
	IBike* CreateBike()
	{
		return new BmwBike();
	}
};

class AudiFactory :public AFactory
{
public:
	ICar* CreateCar()
	{
		return new AudiCar();
	}
	IBike* CreateBike()
	{
		return new AudiBike();
	}
};

#endif

