#pragma once

#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"

class BenzCar :public ICar
{
public:
	string Name()
	{
		return "Benz Car";
	}
};

class BmwCar :public ICar
{
public:
	string Name()
	{
		return "Bmw Car";
	}
};

class AudiCar :public ICar
{
public:
	string Name()
	{
		return "Audi Car";
	}
};

class BenzBike :public IBike
{
public:
	string Name()
	{
		return "Benz Bike";
	}
};

class BmwBike :public IBike
{
public:
	string Name()
	{
		return "Bmw Bike";
	}
};

class AudiBike :public IBike
{
public:
	string Name()
	{
		return "Audi Bike";
	}
};

#endif























