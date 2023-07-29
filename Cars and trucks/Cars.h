#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Vehicles.h"

using namespace std;

class Cars:public Vehicles {
private:
	
	int HowManyDoors;

public:
	void SaveHowManyDoors(int);
	int ReturnHowManyDoors();
	void DisplayCarInfo();
};
