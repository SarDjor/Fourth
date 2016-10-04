#pragma once
#include "ContainerClass.h"
#include <iostream>
using namespace std;

class Controller{
public:
	float AverageDisplacement(Harbour*);
	void Kaptainsless35(Harbour*);
	int Countsits(Harbour*);
};



float Controller::AverageDisplacement(Harbour* A){
	float average = 0;
	unsigned int k = 0;
	Field *pr = A->Head;
	while (pr != NULL){
		average += pr->info->getdisplacement();
		k++;
		pr = pr->next;
	}
	return average / k;
}

void Controller::Kaptainsless35(Harbour *A){
	Field *pr = A->Head;
	while (pr->next != NULL){
		if (pr->info->getage() < 35)
			cout << "Find!!!" << endl;
		pr->info->toConsole();
		pr = pr->next;
	}
}

int Controller::Countsits(Harbour *A){
	unsigned int sum = 0, k = 0;
	Field *pr = A->Head;
	while (pr != NULL){
		sum += pr->info->getsits();
		pr = pr->next;
		k++;
	}
	return sum /= k;
}