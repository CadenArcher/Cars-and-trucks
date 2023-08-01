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
	Trucks(string manufacturer, int year, int TowingCapacity);
	int ReturnTowingCapcity();
	void DisplayTruckInfo();
};