
#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>

#ifndef  SAFE_DELETE
#define SAFE_DELETE(P){if(p){delete(p);(p) = NULL;}}
#endif // ! SAFE_DELETE
using namespace std;

int main()
{
	IBeverage* pHouseBlend = new HouseBlend();
	cout << pHouseBlend->Name() << ":" << pHouseBlend->Cost() << endl;
	
	CondimentDecorator* pCream = new Cream(pHouseBlend);
	cout << pCream->Name() << ":" << pCream->Cost() << endl;

	CondimentDecorator* pMocha = new Mocha(pHouseBlend);
	cout << pMocha->Name() << ":" << pMocha->Cost() << endl;

	CondimentDecorator* pSyrup = new Syrup(pHouseBlend);
	cout << pSyrup->Name() << ":" << pSyrup->Cost() << endl;

	IBeverage* pDarkRoast = new DarkRoast();
	cout << pDarkRoast->Name() << ":" << pDarkRoast->Cost() << endl;

	CondimentDecorator* pCreamDR = new Cream(pDarkRoast);
	cout << pCreamDR->Name() << ":" << pCreamDR->Cost() << endl;

	CondimentDecorator* pCreamMocha = new Mocha(pCreamDR);
	cout << pCreamMocha->Name() << ":" << pCreamMocha->Cost() << endl;

	CondimentDecorator* pCreamMochaSyrup = new Syrup(pCreamMocha);
	cout << pCreamMochaSyrup->Name() << ":" << pCreamMochaSyrup->Cost() << endl;
	
	getchar();
	return 0;



}
