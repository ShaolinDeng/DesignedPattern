#pragma once

#include "factory.h"

class ConcreteFactory :public Factory
{
public:
	Product* factoryMethod() override;
};