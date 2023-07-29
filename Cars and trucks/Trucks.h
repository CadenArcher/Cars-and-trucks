#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Vehicles.h"
using namespace std;



class Trucks:public Vehicles {
private:

	int TowingCapacity;
	

public:
	void StoreTowingCapacity(int);
	int ReturnTowingCapcity();
	void DisplayTruckInfo();
};