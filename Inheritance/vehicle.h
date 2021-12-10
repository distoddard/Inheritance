#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef Vehicle_h
#define Vehicle_h

class Vehicle {
private:
	string maker;
	int yrBuilt;

public:
	Vehicle();
	Vehicle(string, int);
	void setMaker(string);
	void setYrBuilt(int);
	string getMaker();
	int getYrBuilt();
	void displayInfo();
};
#endif // !Vehicle_h
