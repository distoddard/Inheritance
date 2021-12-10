#include "car.h"
#include <iostream>

Car::Car() {
	doors = 0;
}
Car::Car(int newDoors, string newMaker, int newYrBuilt) :Vehicle(newMaker, newYrBuilt) {
	doors = newDoors;
}
void Car::setDoors(int newDoors) {
	doors = newDoors;
}
int Car::getDoors() {
	return doors;
}
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << doors << endl;
}