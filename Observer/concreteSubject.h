#pragma once
#include "subject.h"

class concreteSubject :public Subject
{
public:
	void attach(Observer *ob) override;
	void detach(Observer *ob) override;
	void notifyAll() override;

	int getState() override;
	void setState(int i) override;
};