#include "concreteFactory.h"
#include "concreteProduct.h"


ProductA* concreteFactory1::createProductA()
{
	return new concreteProductA1();
}

ProductB* concreteFactory1::createProductB()
{
	return new concreteProductB1();
}




ProductA* concreteFactory2::createProductA()
{
	return new concreteProductA2();
}

ProductB* concreteFactory2::createProductB()
{
	return new concreteProductB2();
}