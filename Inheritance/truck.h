#pragma once
#include<string>
#include "vehicle.h"
using namespace std;

#ifndef Truck_h
#define Truck_h

class Truck : public Vehicle {
private:
	int towCap;
public:
	Truck();
	Truck(int, string, int);
	void setTowCap(int);
	int getTowCap();
	void displayInfo();
};
#endif // !Truck_h
