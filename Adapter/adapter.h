#pragma once

#include "adaptee.h"
#include "target.h"

class Adapter :public Target
{
public:
	void request() override;
private:
	Adaptee adapetee;
};