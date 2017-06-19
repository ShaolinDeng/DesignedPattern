#include "concreteOberver.h"
#include <iostream>
#include "subject.h"

void concreteObserver::update(Subject* s)
{
	std::cout << s->getState() << std::endl;
}
