#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Cars.h"
#include "Vehicles.h"


Cars::Cars(string manufacturer, int year, int doors) : Vehicles(manufacturer, year), HowManyDoors(doors) {}

int Cars::ReturnHowManyDoors() {//returns how many doors the car has
	return HowManyDoors;
}

void Cars::DisplayCarInfo() {//displays the inherited informtion and the amount of doors the car has 
	DisplayInfo();
	cout << "Number of Doors: " << ReturnHowManyDoors() << endl;
}

