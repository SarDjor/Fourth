#pragma once
#include <iostream>
#include "Something.h"
#include "ContainerClass.h"




class Vehicle : public Something {
protected:
	int weight;
	int expluatation;
	const int *variable;
public:
	Vehicle(int we,int explu,int ag,char nam[20],char clname[20],int d, int cs);
	Vehicle();
	

	
	virtual void toConsole();
	virtual void setw(int);
	void simplemethod();
	void setclassname(char[20]);
	bool checkage(Driver*) const;   //check nested field
	void constcast() const;         //this method change const "variable"
	bool checkname(char[20]);
	int getdisplacement();
	int getage();
	int getsits();
	//~Vehicle();
};
















class Car : protected Vehicle{                                   //new protected-derived class Car
public:
	int TestVariable;
	Car(int we, int explu, int ag, char nam[20], char clname[20],int d, int cs)
		:Vehicle(we, explu, ag, nam,clname,d,cs){
		printf("Car class was created!!!\n");
	}
	
	void showFunction(){
		printf("Weight was changed to 120\n");
		weight = 120;                                             //changing protected element...
	}
protected:
	int forinherclasses;
};

class Airplane : public Car {
public:
	Airplane(int we, int explu, int ag, char nam[20], char clname[20],int d,int cs)
		:Car(we,explu,ag,nam,clname,d,cs){
		printf("Airplane class was created!!!\n");
	}
	const int passengers = 150;
	int payment;
	void showPassengers() const {
		printf("Number of passengers: " + passengers);
		//passengers = 23                            Mistake!!! Its a const method!!!
		//payment = 50;                              The same
	}
};






