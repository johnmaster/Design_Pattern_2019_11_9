
#include "factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p) {delete(p); (p) = NULL;}}
#endif

int main()
{
	Factory* pFactory = new Factory();
	ICar* pCar = pFactory->CreateCar(Factory::BENZ_CAR);
	cout << pCar->Name() << endl;

	SAFE_DELETE(pCar);
	
	pCar = pFactory->CreateCar(Factory::BMW_CAR);
	cout << pCar->Name() << endl;

	SAFE_DELETE(pCar);

	pCar = pFactory->CreateCar(Factory::AUDI_CAR);
	cout << pCar->Name() << endl;

	SAFE_DELETE(pCar);

	getchar();

	return 0;

}
