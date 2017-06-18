#include "concreteBuilder.h"
#include "director.h"
#include "product.h"
int main()
{
	concreteBuilder cb;
	Director dir;
	dir.setBuild(&cb);
	Product *p = dir.constract();
	p->use();

	delete p;
	return 0;
}