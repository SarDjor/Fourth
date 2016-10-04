#pragma once
//#include "ContainerClass.h"

class Something{
protected:
	char classname[20];
	int weight;
	int displacement;
	int countsits;
public:
	
	
	virtual void simplemethod() = 0;
	virtual void toConsole() = 0;
	virtual bool checkname(char[20]) = 0;
};



