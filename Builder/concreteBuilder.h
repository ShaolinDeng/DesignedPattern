#pragma once


#include "builder.h"
#include "concreteProduct.h"

class concreteBuilder :public Builder
{
public:
	virtual void part1();
	virtual void part2();
	virtual void part3();
	virtual Product* getResult();

private:
	concreteProduct* cp;
};