#include "concreteBuilder.h"


void concreteBuilder::part1()
{
	cp = new concreteProduct();
}
void concreteBuilder::part2()
{
	cp->buildPart1();
}
void concreteBuilder::part3()
{
	cp->buildPart2();
}
Product* concreteBuilder::getResult()
{
	return cp;
}