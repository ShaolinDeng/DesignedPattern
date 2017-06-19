#pragma once
#include "Subject.h"

class Proxy :public Subject
{
public:
	Proxy();
	~Proxy();
	void request() override;
private:
	void beforeRequest();
	void afterRequest();
	Subject* sub;
};