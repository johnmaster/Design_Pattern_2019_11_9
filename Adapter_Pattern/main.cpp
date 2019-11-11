
#include "adapter.h"

int main()
{
	IRussiaSocket* pAdapter = new PowerAdapter();
	pAdapter->Charge();
	SAFE_DELETE(pAdapter);

	getchar();
	return 0;
}