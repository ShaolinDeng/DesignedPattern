#include "concreteImplementor.h"
#include <iostream>

void ImplementorA::operatorImp()
{
	std::cout << "concrete implementor a" << std::endl;
}


void ImplementorB::operatorImp()
{
	std::cout << "concrete implement b " << std::endl;
}

