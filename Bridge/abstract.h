#pragma once
#include "implementor.h"
class Abstract
{
public:
	Abstract(Implementor *rh) :imp(rh) { };
	virtual void operation() = 0;

protected:
	Implementor *imp;
};