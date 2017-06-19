#pragma once

#include "oberver.h"

class concreteObserver :public Observer
{
public:
	void update(Subject *) override;
};