#pragma once
#include "product.h"


class concreteProduct :public Product
{
public:
	void use();
	void buildPart1();
	void buildPart2();
};