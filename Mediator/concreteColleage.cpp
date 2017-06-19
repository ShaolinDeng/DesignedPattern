#include "concreteColleage.h"
#include <iostream>


void ConcreteColleage::recvMsg(int no, std::string str)
{
	std::cout << this << std::endl;
	std::cout << "recv msg " << " : " << str.c_str() << std::endl;
}


void ConcreteColleage::sendMsg(int no, std::string str)
{
	med->operation(no, str);
}


void ConcreteColleage::setMediator(Mediator* med)
{
	this->med = med;
}

