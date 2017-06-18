#pragma once

#include "factory.h"


class concreteFactory1 :public Factory
{
public:
	ProductA* createProductA() override;
	ProductB* createProductB() override;
};

class concreteFactory2 :public Factory
{
public:
	ProductA* createProductA() override;
	ProductB* createProductB() override;
};