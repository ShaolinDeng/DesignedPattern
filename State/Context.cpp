#include "Context.h"
#include "concreteState.h"


Context::Context()
	:state(ConcreteStateA::getInstance())
{
}

void Context::changeState(State* state)
{
	this->state = state;
}

void Context::operation()
{
	this->state->handle(this);
}


