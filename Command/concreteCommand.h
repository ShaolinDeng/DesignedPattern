#pragma once

#include "receiver.h"
#include "command.h"

class ConcreteCommand :public Command
{
public:
	ConcreteCommand(Receiver *rh);
	~ConcreteCommand();
	void execuse() override;
private:
	Receiver *recv;
};