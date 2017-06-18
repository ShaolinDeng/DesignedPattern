#include "concreteFactory.h"

int main()
{
	ConcreteFactory cf;
	Product *p = cf.factoryMethod();
	p->use();

	delete p;
	return 0;
}