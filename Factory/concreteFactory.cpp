#include "concreteFactory.h"
#include "concreteProduct.h"

Product* ConcreteFactory::factoryMethod()
{
	return new ConcreteProduct();
}