#pragma once
#include <iostream>


class Singleton final
{
public:
	static Singleton& getInstance()
	{
		static Singleton ins;
		return ins;
	}
	void func1()
	{
		std::cout << "func1" << std::endl;
	}
private:
	Singleton() = default;
	Singleton(const Singleton&);
	Singleton(Singleton &&);
	Singleton& operator=(const Singleton&);
	Singleton& operator=(Singleton&&);
};
