#include "refineAbstract.h"
#include "concreteImplementor.h"


int main()
{
	Abstract *pa = new refineAbtract(new ImplementorA());
	Abstract *pb = new refineAbtract(new ImplementorB());

	pa->operation();
	pb->operation();
	delete pa;
	delete pb;
	return 0;
}