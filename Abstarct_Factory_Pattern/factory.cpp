#include "factory.h"
#include "concrete_factory.h"

AFactory* AFactory::CreateFactory(FACTORY_TYPE factory)
{
	AFactory* pFactory = NULL;
	switch (factory)
	{
	case AFactory::BENZ_FACTORY:
		pFactory = new BenzFactory();
		break;
	case AFactory::BMW_FACTORY:
		pFactory = new BmwFactory();
		break;
	case AFactory::AUDI_FACTORY:
		pFactory = new AudiFactory();
		break;
	default:
		break;
	}
	return pFactory;
}