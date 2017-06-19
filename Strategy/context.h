#pragma once
#include "strategy.h"


class Context
{
public:
	void algorithm();
	void setStrategy(Strategy *strategy);
private:
	Strategy *strategy_;
};