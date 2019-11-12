#pragma once

#ifndef SUBJECT_H
#define SUBJECT_H

class ITelco
{
public:
	virtual ~ITelco()
	{

	}
	virtual void Recharge(int money) = 0;
};

#endif // !SUBJECT_H

