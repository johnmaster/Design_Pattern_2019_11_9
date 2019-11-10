#pragma once
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Food
{
public:
	virtual string Name() = 0;
};

#endif 