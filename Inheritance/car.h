#pragma once
#include <string>
#include "vehicle.h"
using namespace std;

#ifndef Car_h
#define Car_h

class Car :public Vehicle {
private:
	int doors;
public:
	Car();
	Car(int, string, int);
	void setDoors(int);
	int getDoors();
	void displayInfo();
};
#endif // !Car_h
