#include "concreteFactory.h"

int main()
{
	concreteFactory1 f1;
	ProductA* pa1 = f1.createProductA();
	ProductB* pb1 = f1.createProductB();
	pa1->func1();
	pb1->func2();

	concreteFactory2 f2;
	ProductA* pa2 = f2.createProductA();
	ProductB* pb2 = f2.createProductB();
	pa2->func1();
	pb2->func2();

	delete pa1;
	delete pb1;
	delete pa2;
	delete pb2;

	return 0;
}