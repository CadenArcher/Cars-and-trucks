#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Trucks.h"
#include "Vehicles.h"

void Trucks::StoreTowingCapacity( int MaxTowAmount) {//Sotre the towing capcity
	
	TowingCapacity = MaxTowAmount;
	
};



int Trucks::ReturnTowingCapcity() {//displays the towing capcity 
	return TowingCapacity;
}

void Trucks::DisplayTruckInfo() {//displays the inherited informtion and the towing capacity
	DisplayInfo();
	cout << "Towing Capacity: " << ReturnTowingCapcity() << endl;
}