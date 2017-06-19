#include "concreteStategy.h"
#include "context.h"


int main()
{
	Strategy* ps = new ConcreteStrategy;
	Context c;
	c.setStrategy(ps);
	c.algorithm();

	delete ps;
	return 0;
}