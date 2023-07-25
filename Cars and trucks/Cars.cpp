#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Cars.h"

void Cars::SaveHowManyDoors(int HowManyDoorsAreOnTheCar) {
	HowManyDoors = HowManyDoorsAreOnTheCar;
}

int Cars::ReturnHowManyDoors() {
	return HowManyDoors;
}