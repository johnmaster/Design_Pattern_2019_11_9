#pragma once
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director
{
public:
	void Create(IBuilder* builder)
	{
		builder->BuildCpu();
		builder->BuildMainboard();
		builder->BuildRam();
		builder->BuildVideoCard();
	}
};

#endif 