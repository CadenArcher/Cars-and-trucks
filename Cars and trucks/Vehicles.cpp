#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Vehicles.h"
using namespace std;

void Vehicles::StoreVehicleInformation(string Make, int Year) {
	
	Manufacturer = Make;
	YearBuilt = Year;
	
};

string Vehicles::VehicleManufacturer() {
	return Manufacturer;
	
}

int Vehicles::VehicleYear() {
	return YearBuilt;
}

void Vehicles::DisplayInfo() {
	cout << "Manufacturer: " << Manufacturer << endl;
	cout << "Year Built: " << YearBuilt << endl;
}