#pragma once
#include "concreteProductA.h"
#include "concreteProductB.h"
#include <string>

class SimplerFactory final
{
public:
	static Product* createProduct(std::string str);
};