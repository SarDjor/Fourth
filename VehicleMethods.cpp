#include "stdafx.h"


#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;




// CONSTRUCTORS
Vehicle::Vehicle(int we,int explu, int ag, char nam[20],char clname[20],int d, int cs): weight(we),expluatation(explu){
	countsits = cs;
	displacement = d;
	strcpy(classname, clname);
	man = new Driver(ag,nam);
	int i = 5;
	variable = &i;
		cout << "Vehicle class was created!!!" << endl;
}

Vehicle::Vehicle() : Vehicle(NULL, NULL, NULL, NULL,NULL,NULL,NULL){};

Something::Driver::Driver(int ag, char nam[20]){
	Vehicle::Driver::age = ag;
	strcpy(Vehicle::Driver::name, nam);
	cout << "Nested class 'Driver' was created!!!" << endl;
}

void Something::Driver::show(){
	cout << "Drivers name: " << this->name << endl;
	cout << "Drivers age: " << this->age << endl;
}
//----------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------




//DRIVER LINKED METHODS
int Vehicle::getage(){
	return this->man->age;
}
int Vehicle::getdisplacement(){
	return displacement;
}
int Vehicle::getsits() {
	return countsits;
}
//----------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------



//VEHICLE METHODS
void Vehicle::simplemethod(){
	cout << "Its a extremly simple method of basic class from " << classname<< " class"  << endl;
}


void Vehicle::setclassname(char buf[20]){
	strcpy(this->classname, buf);
}


void Vehicle::setw(int i){
	weight = i;
	cout << "Weight was changed!!!";

}


bool Vehicle::checkname(char buf[20]){
	if (strcmp(buf, classname) == 0)
		return true;
	return false;
}


void Vehicle::toConsole(){
	cout << "Weight: " << weight << endl
		<< "Expluatation: " << expluatation << endl
		<< "Captan's age: " << this->man->age << endl
		<< "Captan's name: " << this->man->name << endl
		<< "Displacement: " << displacement << endl
		<< "Count of sits: " << countsits << endl << endl;
}
//------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------















