#pragma once
#include "produce.h"

class ConcreteProductA :public Product
{
public:
	void use() override;
};