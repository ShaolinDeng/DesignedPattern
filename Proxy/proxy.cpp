#include "realSubject.h"
#include "proxy.h"
#include <ostream>
#include <iostream>


Proxy::Proxy()
{
	sub = new RealSubject();
}

Proxy::~Proxy()
{
	delete sub;
}


void Proxy::request()
{
	beforeRequest();
	sub->request();
	afterRequest();
}


void Proxy::beforeRequest()
{
	std::cout << "before request" << std::endl;
}


void Proxy::afterRequest()
{
	std::cout << "after request" << std::endl;
}



