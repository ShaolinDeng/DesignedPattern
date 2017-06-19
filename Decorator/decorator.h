#pragma once
#include "component.h"

class Decorator :public Component
{
public:
	Decorator(Component *conp);
	virtual void operation();
private:
	Component *conp;
};