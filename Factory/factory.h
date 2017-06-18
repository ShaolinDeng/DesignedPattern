#pragma once

#include "product.h"

class Factory
{
public:
	virtual ~Factory() = default;
	virtual Product* factoryMethod() = 0;
};