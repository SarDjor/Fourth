class WingShip : public Vehicle {
public:
	WingShip(int we, int explu, int ag, char nam[20], char clname[20], int d,int cs)
		:Vehicle(we, explu, ag, nam,clname, d,cs){
		printf("WingShip class was created!!!\n");
	};
	void toConsole();///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
};

void WingShip::toConsole(){
	std::cout << "Method show() of derivated class WingShip: " << std::endl;
	Vehicle::toConsole();
}


