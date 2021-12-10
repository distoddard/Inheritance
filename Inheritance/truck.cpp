#include <iostream>
#include "truck.h"

Truck::Truck() {
	towCap = 0;
}
Truck::Truck(int newTowCap, string newMaker, int newYrBuilt) :Vehicle(newMaker, newYrBuilt) {
	towCap = newTowCap;
}
void Truck::setTowCap(int newTowCap) {
	towCap = newTowCap;
}
int Truck::getTowCap() {
	return towCap;
}
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap << endl;
}