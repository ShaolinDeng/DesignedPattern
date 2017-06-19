#include "concreteColleage.h"
#include "concreteMediator.h"
#include <iostream>

int main()
{
	Colleage *pca = new ConcreteColleage;
	Colleage *pcb = new ConcreteColleage;
	Mediator *pm = new ConcreteMediator;

	std::cout << pca << std::endl;
	std::cout << pcb << std::endl;

	pm->registerColleage(1, pca);
	pm->registerColleage(2, pcb);

	pca->sendMsg(2, "hello");
	pcb->sendMsg(1, "hello");

	delete pca;
	delete pcb;
	delete pm;

}