//#include "VehicleClass.h"

class SteamRoller : public Vehicle {
public:
	SteamRoller(int we, int explu, int ag, char nam[20], char clname[20], int d,int cs)
		:Vehicle(we, explu, ag, nam,clname,d,cs){
		printf("SteamRoller class was created!!!\n");
	};
	void toConsole();
};

void SteamRoller::toConsole(){
	std::cout << "Method show() of derivated class SteamRoller: " << std::endl;
	Vehicle::toConsole();
}