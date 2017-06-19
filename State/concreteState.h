#pragma once
#include "State.h"
#include "Context.h"

class ConcreteStateA :public State
{
public:
	static ConcreteStateA* getInstance()
	{
		static ConcreteStateA inst;
		return &inst;
	}
	void handle(Context *) override;
private:
	ConcreteStateA() = default;
};



class ConcreteStateB :public State
{
public:
	static ConcreteStateB* getInstance()
	{
		static ConcreteStateB inst;
		return &inst;
	}
	void handle(Context *) override;
private:
	ConcreteStateB() = default;
};