#pragma once

#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>

using namespace std;

class Vehicles {
private:
	string Manufacturer;
	int YearBuilt;

public:
    void StoreVehicleInformation(string, int);
    string VehicleManufacturer();
    int VehicleYear();
    void DisplayInfo();
};
