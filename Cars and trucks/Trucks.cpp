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

void Trucks::DisplayTruckInfo(string Man, int Year) {
	Vehicles Veh;
	const int MaxVehicles = 200;
	Vehicles VehiclesArrayList[MaxVehicles];
	VehiclesArrayList[1].StoreVehicleInformation(Man, Year);
	VehiclesArrayList[1].DisplayInfo();
	cout << "Towing Capacity: " << TowingCapacity << endl;
}