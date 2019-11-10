
#include "concrete_factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p)=NULL;}}
#endif

int main()
{
	AFactory* pFactory = new HamburgerFactory();
	Food* pFood = pFactory->CreateFood();
	cout << "Hambuger Factory:" << pFood->Name() << endl;

	SAFE_DELETE(pFood);
	SAFE_DELETE(pFactory);

	pFactory = new ChipsFactory();
	pFood = pFactory->CreateFood();
	cout << "Chips Factory:" << pFood->Name() << endl;

	SAFE_DELETE(pFood);
	SAFE_DELETE(pFactory);

	pFactory = new ChickenRollsFactory();
	pFood = pFactory->CreateFood();
	cout << "ChickenRolls Factory:" << pFood->Name() << endl;

	SAFE_DELETE(pFood);
	SAFE_DELETE(pFood);

	getchar();

	return 0;
}
