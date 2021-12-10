//Daniel Stoddard
//CIS 1202 - 800
//November 25, 2021

#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "truck.h"
using namespace std;

int main() {
	string maker;
	int yrBuilt, doors, towCap;

	cout << "Vehicle Program" << endl << endl;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, maker);
	cout << "Enter the year built: ";
	cin >> yrBuilt;

	Vehicle vehicle;
	vehicle.setMaker(maker);
	vehicle.setYrBuilt(yrBuilt);

	cout << "\nVehicle Information:" << endl;
	vehicle.displayInfo();

	cout << "\n\nCar:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, maker);
	cout << "Enter the year built: ";
	cin >> yrBuilt;
	cout << "Enter the doors: ";
	cin >> doors;

	Car car;
	car.setMaker(maker);
	car.setYrBuilt(yrBuilt);
	car.setDoors(doors);

	cout << "\nCar information:" << endl;
	car.displayInfo();

	cout << "\n\nTruck:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, maker);
	cout << "Enter the year built: ";
	cin >> yrBuilt;
	cout << "Enter the towing capacity: ";
	cin >> towCap;

	Truck truck;
	truck.setMaker(maker);
	truck.setYrBuilt(yrBuilt);
	truck.setTowCap(towCap);

	cout << "\nTruck information:" << endl;
	truck.displayInfo();
	cout << "\n\n";
}