#include "flyweightFactory.h"

int main()
{
	FlyweightFactory ff;
	FlyWeight* pa = ff.getFlyWeight("one");
	FlyWeight *pb = ff.getFlyWeight("two");
	pa->operation();
	pb->operation();
	delete pa;
	delete pb;
}