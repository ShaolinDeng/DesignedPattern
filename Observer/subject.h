#pragma once

#include "oberver.h"
#include <vector>

class Subject
{
public:
	virtual void attach(Observer *ob) = 0;
	virtual void detach(Observer *ob) = 0;
	virtual void notifyAll() = 0;

	virtual int getState() = 0;
	virtual void setState(int i) = 0;
protected:
	std::vector<Observer *> vObservers;
	int iState;
};