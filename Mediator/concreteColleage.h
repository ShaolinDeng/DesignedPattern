#pragma once
#include "colleage.h"


class ConcreteColleage :public Colleage
{
public:
	void sendMsg(int no, std::string str);
	void recvMsg(int no, std::string str);
	void setMediator(Mediator *med);
};