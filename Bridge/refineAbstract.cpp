#include "refineAbstract.h"

refineAbtract::refineAbtract(Implementor* rh)
	:Abstract(rh)
{
}

void refineAbtract::operation()
{
	imp->operatorImp();
}

