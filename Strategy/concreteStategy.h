#pragma once
#include "strategy.h"

class ConcreteStrategy :public Strategy
{
public:
	void algorithm() override;
};