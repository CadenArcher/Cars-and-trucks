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
	DisplayInfo();
	cout << "Number of Doors: " << HowManyDoors << endl;
}

