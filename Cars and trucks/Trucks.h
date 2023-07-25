#pragma once
#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>

using namespace std;


class Trucks {
private:

	int TowingCapacity;

public:
	void StoreTowingCapacity(int);
	int ReturnTowingCapcity();
};