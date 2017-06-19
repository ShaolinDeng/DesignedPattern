#pragma once
#include "implementor.h"


class ImplementorA :public Implementor
{
public:
	void operatorImp() override;
};


class ImplementorB :public Implementor
{
public:
	void operatorImp() override;
};