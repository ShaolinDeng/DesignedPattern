#pragma once
#include "State.h"

class Context
{
public:
	Context();
	void changeState(State* state);
	void operation();
private:
	State *state;
};