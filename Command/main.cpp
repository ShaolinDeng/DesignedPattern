#include "invoker.h"
#include "receiver.h"
#include "concreteCommand.h"

int main()
{
	Receiver* recv = new Receiver;
	Command	*con = new ConcreteCommand(recv);
	Invoker* inv = new Invoker(con);

	inv->call();

	delete inv;
	delete con;
	delete recv;
}