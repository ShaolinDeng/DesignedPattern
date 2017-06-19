#include "invoker.h"

Invoker::Invoker(Command* con)
{
	this->con = con;
}


void Invoker::call()
{
	this->con->execuse();
}

