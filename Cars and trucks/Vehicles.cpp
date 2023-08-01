#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Vehicles.h"
using namespace std;

Vehicles::Vehicles(string manufacturer, int year) : Manufacturer(manufacturer), YearBuilt(year) {}

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