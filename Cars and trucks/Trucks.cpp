#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Trucks.h"
#include "Vehicles.h"


Trucks::Trucks(string manufacturer, int year, int doors) : Vehicles(manufacturer, year), TowingCapacity(doors) {}


int Trucks::ReturnTowingCapcity() {//displays the towing capcity 
	return TowingCapacity;
}

void Trucks::DisplayTruckInfo() {//displays the inherited informtion and the towing capacity
	DisplayInfo();
	cout << "Towing Capacity: " << ReturnTowingCapcity() << endl;
}