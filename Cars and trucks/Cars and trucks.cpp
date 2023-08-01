/*
Caden  Archer
7/30/2023
Name: Cars and Trucks
Discription: Using a class system to log and input information about Vehicles so the Car.h and the Truck.h can inheirent the information for it

*/

#include <random>
#include<cstring>
#include<string>
#include <iomanip>
#include<iostream>
#include <fstream>
#include "Cars.h"
#include "Trucks.h"
#include "Vehicles.h"

using namespace std;
void VehicleInformation();
void CarInformation();
void TruckInformation();

int main()
{
	

	VehicleInformation();
	CarInformation();
	TruckInformation();

 
	

	return 0;
}

void VehicleInformation() {//Has the use input infoirmation about the Year and Manufactuere for the Vehicle class
	
	string  Manufacturer;
	int Year;
	
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);
	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();
	Vehicles Vehicle(Manufacturer, Year);
	Vehicle.DisplayInfo();
	cout << endl;
}

void TruckInformation() { //Has the user input the towing capcity into the class and inherit the Vehicle informtion before displying it 
	string Manufacturer;
	int Year;
	
	int TowingCapacity;
	cin.ignore();
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);

	cout << "Enter the year built: ";
	cin >> Year;
	
	
	
	cout << "Enter the towing capacity: ";
	cin >> TowingCapacity;

	Trucks Truck(Manufacturer, Year, TowingCapacity);

	cout << "Trucks:\n";

	cout << "Vehicle Information: \n";
	Truck.DisplayTruckInfo();
	cout << endl;

}

void CarInformation() {//Has the user input the amount of car door into the class and inherit the Vehicle informtion before displying it 
	string Manufacturer;
	int Year;
	
	int HowManyDoors;

	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);

	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();

	cout << "Enter the number of doors: ";
	cin >> HowManyDoors;

	Cars Car(Manufacturer, Year, HowManyDoors);

	cout << "\Cars:\n";


	cout << "Vehicle Information: \n";
	Car.DisplayCarInfo();
	cout << endl;


}