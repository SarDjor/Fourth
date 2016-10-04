#include "stdafx.h"
#include <iostream>
#include "ContainerClass.h"

//CONSTRUCTORS
Harbour::Harbour(){
	Head = NULL;
}
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


void Harbour::show(){
	Field *pr = new Field();
	pr = Head;
	while (pr != NULL){
		pr->info->toConsole();
		pr = pr->next;
	}
}

void Harbour::set(Something* A){
	Field* pr = new Field;
	pr->info = A;
	pr->next = Head;
	Head = pr;
};

void Harbour::get(char buf[20]){
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