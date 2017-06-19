#include "concreteFlyWeight.h"
#include <ostream>
#include <iostream>


concreteFlyWeight::concreteFlyWeight(std::string str)
{
	this->name = str;
}


void concreteFlyWeight::operation()
{
	std::cout << this->name << std::endl;
	std::cout << "concrete flyweiget" << std::endl;
}
