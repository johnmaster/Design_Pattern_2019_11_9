#pragma once
#ifndef  PROXY_H
#define PROXY_H

#include "subject.h"
#include "real_subject.h"
#include <iostream>

class Proxy :public ITelco
{
private:
	CMCC* m_pCMCC;
public:
	Proxy() :m_pCMCC(NULL) {}
	~Proxy()
	{
		delete m_pCMCC;
	}
	void Recharge(int money) override
	{
		if (money >= 50)
		{
			if (m_pCMCC == NULL)
			{	
				cout << "111111111" << endl;
				m_pCMCC = new CMCC();
			}
			m_pCMCC->Recharge(money);
		}
		else
		{
			cout << "Sorry,too little money" << endl;
		}
	}
};


#endif // ! PROXY_H
