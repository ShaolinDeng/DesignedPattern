#pragma once

#include "command.h"

class Invoker
{
public:
	Invoker(Command *con);
	void call();
private:
	Command *con;
};