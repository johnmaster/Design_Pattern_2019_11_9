#pragma once
#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "subject.h"
#include <iostream>
using namespace std;

class CMCC :public ITelco
{
public:
	void Recharge(int money) override
	{
		cout << " Recharge " << money;
	}
};

#endif // !REAL_SUBJECT_H
