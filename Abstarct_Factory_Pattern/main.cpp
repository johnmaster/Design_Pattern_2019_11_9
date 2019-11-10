
#include "factory.h"
#include "product.h"
#include <iostream>

using namespace std;

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p) {delete(p); (p) = NULL;}}
#endif

int main()
{
	AFactory* pFactory = AFactory::CreateFactory(AFactory::FACTORY_TYPE::BENZ_FACTORY);
	ICar* pCar = pFactory->CreateCar();
	IBike* pBike = pFactory->CreateBike();

	cout << "Benz Factory - Car:" << pCar->Name() << endl;
	cout << "Benz Factory-Bike:" << pBike->Name() << endl;

	SAFE_DELETE(pCar);
	SAFE_DELETE(pBike);
	SAFE_DELETE(pFactory);

	pFactory = AFactory::CreateFactory(AFactory::FACTORY_TYPE::BMW_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	cout << "Bmw Factory - Car:" << pCar->Name() << endl;
	cout << "Bmw Factory - Bike:" << pBike->Name() << endl;

	SAFE_DELETE(pCar);
	SAFE_DELETE(pBike);
	SAFE_DELETE(pFactory);

	pFactory = AFactory::CreateFactory(AFactory::FACTORY_TYPE::AUDI_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	cout << "Audi Factory - Car:" << pCar->Name() << endl;
	cout << "Audi Factory - Bike:" << pBike->Name() << endl;

	SAFE_DELETE(pCar);
	SAFE_DELETE(pBike);
	SAFE_DELETE(pFactory);

	getchar();
	
	return 0;
}