#pragma once
#include "builder.h"


class Director
{
public:
	void setBuild(Builder* builder);
	Product* constract();
private:
	Builder *builder;
};