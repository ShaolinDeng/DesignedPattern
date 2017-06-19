#include "concreteFlyWeight.h"
#include "flyweightFactory.h"


FlyWeight* FlyweightFactory::getFlyWeight(std::string str)
{
	std::map<std::string, FlyWeight*>::iterator iter = mapFlys.find(str);
	if (iter != mapFlys.end())
	{
		return iter->second;
	}
	else
	{
		FlyWeight *pf = new concreteFlyWeight(str);
		mapFlys[str] = pf;
		return pf;
	}
}
