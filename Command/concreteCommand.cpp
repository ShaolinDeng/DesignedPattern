#include "concreteCommand.h"


ConcreteCommand::ConcreteCommand(Receiver* rh)
{
	this->recv = rh;
}

ConcreteCommand::~ConcreteCommand()
{

}


void ConcreteCommand::execuse()
{
	recv->action();
}
