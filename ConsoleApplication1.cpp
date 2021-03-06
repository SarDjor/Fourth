// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include "VehicleClass.h"
#include "WingShipClass.h"
#include "KorvetClass.h"
#include "ShipClass.h"
#include "SteamRollerClass.h"
#include "ClassController.h"
using namespace std;



int main(){
	Harbour *List = new Harbour();
	Controller *ListControl = new Controller();
	Vehicle *Avrora = new Vehicle(24, 12, 35, "Char","Vehicle",1000,45);
	Ship *Saturn = new Ship(13, 81, 21, "Jack Sparrow", "Ship",10000,76);
	Korvet *Baba = new Korvet(34, 11, 87, "Vasiliy", "Korvet", 15000, 400);
	
	List->set(Avrora);
	List->set(Saturn);
	List->set(Baba);

	List->get("Ship");
	
	cout << "Average displacement: " << ListControl->AverageDisplacement(List) << endl;
	ListControl->Kaptainsless35(List);
	cout << "Average number of sits: " << ListControl->Countsits(List);
	return 0;
}
