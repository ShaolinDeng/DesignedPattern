#pragma once

#include "product.h"

class Builder
{
public:
	virtual void part1() = 0;
	virtual void part2() = 0;
	virtual void part3() = 0;
	virtual Product* getResult() = 0;
};