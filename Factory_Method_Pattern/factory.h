#pragma once

#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class AFactory
{
public:
	virtual Food* CreateFood() = 0;
};

#endif