//#include "VehicleClass.h"

class Korvet : public Vehicle {
public:
	Korvet(int we, int explu, int ag, char nam[20], char clname[20],int d,int cs)
		:Vehicle(we, explu, ag, nam,clname, d,cs){
		printf("Korvet class was created!!!\n");
	};
	void toConsole();
};

void Korvet::toConsole(){
	std::cout << "Method show() of derivated class Korvet: " << std::endl;
	Vehicle::toConsole();
}
