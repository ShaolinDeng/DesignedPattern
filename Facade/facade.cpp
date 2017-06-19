#include "facade.h"

Facade::Facade()
{
	sa = new SystemA();
	sb = new SystemB();
	sc = new SystemC();
}

Facade::~Facade()
{
	delete sa;
	delete sb;
	delete sc;
}

void Facade::wrapOperator()
{
	sa->operatorA();
	sb->operatorB();
	sc->operatorC();
}



