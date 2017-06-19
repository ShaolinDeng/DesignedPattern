#include "concreteMediator.h"


void ConcreteMediator::operation(int no, std::string str)
{
	std::map<int, Colleage*>::iterator iter = mapColleage.find(no);
	if (iter != mapColleage.end())
	{
		iter->second->recvMsg(no, str);
	}
}

void ConcreteMediator::registerColleage(int no, Colleage* colleage)
{
	std::map<int, Colleage*>::iterator iter = mapColleage.find(no);
	if (iter == mapColleage.end())
	{
		mapColleage[no] = colleage;
		colleage->setMediator(this);
	}
}

