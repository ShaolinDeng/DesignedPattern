#pragma once
#include "product.h"

class Factory
{
public:
	virtual ProductA* createProductA() = 0;
	virtual ProductB* createProductB() = 0;
};