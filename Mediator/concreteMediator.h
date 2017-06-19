#pragma once

#include "mediator.h"
#include "colleage.h"

class ConcreteMediator :public Mediator
{
public:
	void operation(int no, std::string str) override;
	void registerColleage(int no, Colleage *colleage) override;
private:
	std::map<int, Colleage*> mapColleage;
};