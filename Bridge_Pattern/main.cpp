#include "refined_abstraction.h"
#include "concrete_implementor.h"

#ifndef  SAFE_DELETE
#define SAFE_DELETE(p){if(p){delete(p); (p)=NULL;}}
#endif // ! SAFE_DELETE

int main()
{
	IElectricalEquipment* light = new Light();
	IElectricalEquipment* fan = new Fan();

	ISwitch* pullChain = new PullChainSwitch(light);
	ISwitch* twoPosition = new TwoPositionSwitch(fan);

	pullChain->On();
	pullChain->Off();

	twoPosition->On();
	twoPosition->Off();

	SAFE_DELETE(twoPosition);
	SAFE_DELETE(pullChain);
	SAFE_DELETE(fan);
	SAFE_DELETE(light);

	getchar();

	return 0;
}