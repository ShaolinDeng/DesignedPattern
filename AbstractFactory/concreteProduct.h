#pragma once
#include "product.h"


class concreteProductA1 : public ProductA
{
public:
	void func1() override;
};

class concreteProductA2 :public ProductA
{
public:
	void func1() override;
};


class concreteProductB1 :public ProductB
{
public:
	void func2() override;
};

class concreteProductB2 :public ProductB
{
public:
	void func2() override;
};