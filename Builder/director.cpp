#include "director.h"


void  Director::setBuild(Builder* builder)
{
	this->builder = builder;
}

Product* Director::constract()
{
	this->builder->part1();
	this->builder->part2();
	this->builder->part3();
	return this->builder->getResult();
}