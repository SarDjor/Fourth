#pragma once
//#include "ContainerClass.h"

class Something{
protected:
	char classname[20];
	int weight;
	int displacement;
	int countsits;
public:
	
	class Driver;
	Driver *man;

	virtual int getage() = 0;
	virtual void simplemethod() = 0;
	virtual void toConsole() = 0;
	virtual bool checkname(char[20]) = 0;
	virtual int getdisplacement() = 0;
	virtual int getsits() = 0;
};



