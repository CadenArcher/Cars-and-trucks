#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Cars.h"
#include "Vehicles.h"

void Cars::SaveHowManyDoors(int HowManyDoorsAreOnTheCar) {
	HowManyDoors = HowManyDoorsAreOnTheCar;
}

int Cars::ReturnHowManyDoors() {
	return HowManyDoors;
}

void Cars::DisplayCarInfo(string Man, int Year) {
	Vehicles Veh;
		const int MaxVehicles = 200;
	Vehicles VehiclesArrayList[MaxVehicles];
	VehiclesArrayList[1].StoreVehicleInformation(Man, Year);
	VehiclesArrayList[1].DisplayInfo();
	cout << "Number of Doors: " << HowManyDoors << endl;
}
