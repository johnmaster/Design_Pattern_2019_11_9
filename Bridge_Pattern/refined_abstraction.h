#pragma once
#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

using namespace std;

class PullChainSwitch :public ISwitch
{
public:
	PullChainSwitch(IElectricalEquipment* ee) :ISwitch(ee) {}
	virtual void On() override
	{
		cout << "Switch on the equipment with a pull chain switch." << endl;
		m_pEe->PowerOn();
	}
	virtual void Off() override
	{
		cout << "Switch off the equipment with a pull chain switch." << std::endl;
		m_pEe->PowerOff();
	}
};

class TwoPositionSwitch :public ISwitch
{
public:
	TwoPositionSwitch(IElectricalEquipment* ee) :ISwitch(ee) {}
	virtual void On() override
	{
		cout << "Switch on the equipment with a two-position switch." << endl;
		m_pEe->PowerOn();
	}
	virtual void Off() override
	{
		cout << "Switch off the equipment with a two-position switch." << endl;
		m_pEe->PowerOff();
	}
};


#endif

