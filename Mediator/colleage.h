#pragma once

#include "mediator.h"

class Colleage
{
public:
	virtual void sendMsg(int no, std::string str) = 0;
	virtual void recvMsg(int no, std::string str) = 0;
	virtual void setMediator(Mediator *med) = 0;
protected:
	Mediator *med;
};