#pragma once

#include "decorator.h"


class concreteDecoratorA :public Decorator
{
public:
	concreteDecoratorA(Component *rh);
	virtual void operation() override;
	void addBehavior();
};

class concreteDecoratorB :public Decorator
{
public:
	concreteDecoratorB(Component *rh);
	virtual void operation() override;
	void addBehavior();
};