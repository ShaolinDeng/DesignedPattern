#include "concreteSubject.h"
#include "concreteOberver.h"


int main()
{
	Observer *pa = new concreteObserver;
	Observer *pb = new concreteObserver;
	Subject *ps = new concreteSubject;
	ps->attach(pa);
	ps->attach(pb);
	ps->setState(5);
	ps->notifyAll();

	delete ps;
	delete pa;
	delete pb;
	return 0;

}