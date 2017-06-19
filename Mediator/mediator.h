#pragma once
#include <map>

class Colleage;

class Mediator
{
public:
	virtual void operation(int no, std::string str) = 0;
	virtual void registerColleage(int no, Colleage *colleage) = 0;
};