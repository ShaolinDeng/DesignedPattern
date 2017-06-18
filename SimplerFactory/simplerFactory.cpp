#include "simplerFactory.h"
#include <algorithm>
#include <locale>
using namespace std;

Product* SimplerFactory::createProduct(std::string str)
{
	transform(str.begin(), str.end(), str.begin(), tolower);
	if (str == "a")
	{
		return new ConcreteProductA();
	}
	else if (str == "b")
	{
		return new ConcreteProductB();
	}
	return nullptr;
}
