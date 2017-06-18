#include "simplerFactory.h"


int main()
{
	Product *pa = SimplerFactory::createProduct("A");
	Product *pb = SimplerFactory::createProduct("b");

	pa->use();
	pb->use();

	delete pa;
	delete pb;
	return 0;
}