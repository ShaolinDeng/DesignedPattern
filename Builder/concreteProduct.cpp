#include "concreteProduct.h"
#include <iostream>
using namespace std;

void concreteProduct::use()
{
	std::cout << "use builder product" << endl;
}

void concreteProduct::buildPart1()
{
	cout << "builde part one" << endl;
}
void concreteProduct::buildPart2()
{
	cout << "build part two" << endl;
}