#include "concreteDecorator.h"
#include <iostream>

concreteDecoratorA::concreteDecoratorA(Component* rh)
	:Decorator(rh)
{

}

void concreteDecoratorA::addBehavior()
{
	std::cout << "behavior a" << std::endl;
}

void concreteDecoratorA::operation()
{
	Decorator::operation();
	addBehavior();
}




concreteDecoratorB::concreteDecoratorB(Component* rh)
	:Decorator(rh)
{

}


void concreteDecoratorB::addBehavior()
{
	std::cout << "behavior b" << std::endl;
}


void concreteDecoratorB::operation()
{
	Decorator::operation();
	addBehavior();
}

