#include "concreteState.h"

#include <iostream>


void ConcreteStateA::handle(Context *cont)
{
	std::cout << "do something in state a" << std::endl;
	cont->changeState(ConcreteStateB::getInstance());

}


void ConcreteStateB::handle(Context *cont)
{
	std::cout << "do something in state b" << std::endl;
}
