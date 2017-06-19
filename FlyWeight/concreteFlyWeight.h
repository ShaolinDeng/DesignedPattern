#pragma once
#include "flyWeight.h"
#include <string>

class concreteFlyWeight :public FlyWeight
{
public:
	concreteFlyWeight(std::string str);
	void operation() override;
private:
	std::string  name;
};
