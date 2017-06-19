#include "concreteSubject.h"


void concreteSubject::attach(Observer* ob)
{
	vObservers.push_back(ob);
}


void concreteSubject::detach(Observer* ob)
{
	for (auto iter = vObservers.begin(); iter != vObservers.end(); iter++)
	{
		if (*iter == ob)
		{
			vObservers.erase(iter);
			return;
		}
	}
}

int concreteSubject::getState()
{
	return iState;
}

void concreteSubject::setState(int i)
{
	iState = i;
}

void concreteSubject::notifyAll()
{
	for (auto iter = vObservers.begin(); iter != vObservers.end(); iter++)
	{
		(*iter)->update(this);
	}
}


