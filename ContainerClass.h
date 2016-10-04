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
	
	Harbour(){
		Head = NULL;
	}

	void show(){
		Field *pr = new Field();
		pr = Head;
		while (pr != NULL){
			pr->info->toConsole();
			pr = pr->next;
		}
	}

	void set(Something* A){
		Field* pr = new Field;
		pr->info = A;
		pr->next = Head;
		Head = pr;
	};

	void get(char buf[20]){
		Field *pr = new Field();
		pr = Head;
		while (pr != NULL){
			if (pr->info->checkname(buf)){
				pr->info->toConsole();
				return;
			}
			pr = pr->next;
		}
		printf("No Vehicle with such name\n");
	}
};
