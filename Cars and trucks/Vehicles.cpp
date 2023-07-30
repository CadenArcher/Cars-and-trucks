#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Vehicles.h"
using namespace std;

void Vehicles::StoreVehicleInformation(string Make, int Year) {//store the manufacuter and year built
	
	Manufacturer = Make;
	YearBuilt = Year;
	
};

string Vehicles::VehicleManufacturer() {//output the manufacturer
	return Manufacturer;
	
}

int Vehicles::VehicleYear() {//output the year built
	return YearBuilt;
}

void Vehicles::DisplayInfo() {//out put both the manufacturer and year the vehcle was made 
	cout << "Manufacturer: " << VehicleManufacturer() << endl;
	cout << "Year Built: " << VehicleYear() << endl;
}