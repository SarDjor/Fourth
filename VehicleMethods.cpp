#include "stdafx.h"


#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;





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


bool Vehicle::checkage(Driver* A) const {                                    //const method
	return (A->age > 30);
}

bool Vehicle::checkname(char buf[20]){
	if (strcmp(buf, classname) == 0)
		return true;
	return false;
}

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

void Vehicle::toConsole(){
	cout << "Weight: " << weight << endl
		<< "Expluatation: " << expluatation << endl
		<< "Captan's age: " << this->man->age << endl
		<< "Captan's name: " << this->man->name << endl
		<< "Displacement: " << displacement << endl
		<< "Count of sits: " << countsits << endl << endl;
}


void Vehicle::constcast() const {                                            //const_cast mehod
	cout << "This method change variable from " << *variable;
	*const_cast<int*>(variable) = 10;
	cout << " to " << *variable << endl;
}

//----------------------------------------------------------------------------------------------------------
Vehicle::Driver::Driver(int ag, char nam[20]){
	Vehicle::Driver::age = ag;
	strcpy(Vehicle::Driver::name, nam);
	cout << "Nested class 'Driver' was created!!!" << endl;
}

void Vehicle::Driver::show(){
	cout << "Drivers name: " << this->name << endl;
	cout << "Drivers age: " << this->age << endl;
}

void Vehicle::Driver::changeWeight(Vehicle* A){
	A->weight += 200;
	cout << "Weight of extern class was changed (+200) from nested class";
}
//------------------------------------------------------------------------------------------------------------















