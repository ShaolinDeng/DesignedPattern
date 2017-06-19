#include "decorator.h"


Decorator::Decorator(Component* conp)
	:conp(conp)
{

}

void Decorator::operation()
{
	conp->operation();
}

