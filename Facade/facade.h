#pragma once
#include "system.h"

class Facade
{
public:
	Facade();
	~Facade();
	void wrapOperator();

private:
	SystemA *sa;
	SystemB *sb;
	SystemC *sc;
};