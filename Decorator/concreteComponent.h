#pragma once

#include "component.h"

class concreteComponent :public Component
{
public:
	void operation() override;
};

