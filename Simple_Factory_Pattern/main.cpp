
#include "factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p) {delete(p); (p) = NULL;}}
#endif

int main()
{
	Factory* pFactory = new Factory();
	Food* pFood = pFactory->CreateCar(Factory::HAMBURGER);
	cout << pFood->Name() << endl;

	SAFE_DELETE(pFood);
	
	pFood = pFactory->CreateCar(Factory::CHIPS);
	cout << pFood->Name() << endl;

	SAFE_DELETE(pFood);

	pFood = pFactory->CreateCar(Factory::CHICKENROLLS);
	cout << pFood->Name() << endl;

	SAFE_DELETE(pFood);

	getchar();

	return 0;

}
