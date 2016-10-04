#pragma once
#include "Something.h"
#include <iostream>

struct Field {
	Something *info;
	Field *next;
};

class Harbour {
public:
	Field* Head;
	
	Harbour();
	void set(Something*);
	void show();
	void get(char[20]);
};
