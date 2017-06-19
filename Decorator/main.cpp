
#include "concreteComponent.h"
#include "concreteDecorator.h"


int main()
{
	Component *p = new concreteComponent();
	Component *pa = new concreteDecoratorA(p);
	Component *pb = new concreteDecoratorB(pa);

	pb->operation();

	delete pb;
	delete pa;
	delete p;
}