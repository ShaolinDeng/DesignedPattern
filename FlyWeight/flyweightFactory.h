#pragma once

#ifndef flyweightFactory_H
#define flyweightFactory_H
#include "flyWeight.h"
#include <map>
class FlyweightFactory
{
public:
	FlyWeight* getFlyWeight(std::string str);
private:
	std::map<std::string, FlyWeight *> mapFlys;
};

#endif // flyweightFactory_H

