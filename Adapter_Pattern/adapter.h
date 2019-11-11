#pragma once
#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p)=NULL;}}
#endif // !SAFE_DELETE

class PowerAdapter :public IRussiaSocket
{
public:
	PowerAdapter():m_pCharger(new OwnCharger()){}
	~PowerAdapter()
	{
		SAFE_DELETE(m_pCharger);
	}
	void Charge()
	{
		m_pCharger->ChargeWithFeetFlat();
	}
private:
	OwnCharger* m_pCharger;
};

#endif // !ADAPTER_H
