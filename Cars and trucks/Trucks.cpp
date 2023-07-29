#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Trucks.h"
#include "Vehicles.h"

void Trucks::StoreTowingCapacity( int MaxTowAmount) {
	
	TowingCapacity = MaxTowAmount;
	
};



int Trucks::ReturnTowingCapcity() {
	return TowingCapacity;
}

void Trucks::DisplayTruckInfo() {
	DisplayInfo();
	cout << "Towing Capacity: " << ReturnTowingCapcity() << endl;
}