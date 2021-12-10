#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	maker = "";
	yrBuilt = 0;
}
Vehicle::Vehicle(string newMaker, int newYearBuilt) {
	maker = newMaker;
	yrBuilt = newYearBuilt;
}
void Vehicle::setMaker(string vehicleMaker) {
	maker = vehicleMaker;
}
void Vehicle::setYrBuilt(int vehicleYrBuilt) {
	yrBuilt = vehicleYrBuilt;
}
string Vehicle::getMaker() {
	return maker;
}
int Vehicle::getYrBuilt() {
	return yrBuilt;
}
void Vehicle::displayInfo() {
	cout << "Manufacturer: " << maker << endl;
	cout << "Year Built: " << yrBuilt << endl;
}