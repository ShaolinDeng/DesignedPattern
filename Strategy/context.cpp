#include "context.h"


void Context::algorithm()
{
	strategy_->algorithm();
}

void Context::setStrategy(Strategy* strategy)
{
	this->strategy_ = strategy;
}
