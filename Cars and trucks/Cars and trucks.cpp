

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
Vehicles VehicleInformation();
Cars CarInformation();
Trucks TruckInformation();
int main()
{
	const int MaxVehicles = 200;
	Vehicles VehiclesArrayList[MaxVehicles];
	Cars CarArrayList[MaxVehicles];
	Trucks TruckArrayList[MaxVehicles];
	Vehicles Veh; 
	Trucks Tru;

	cout << "Vehicle Program\n\n"
		
		<< "Vehicle:\n";
	VehiclesArrayList[0] = VehicleInformation();
	cout << "Vehicle Information: \n"
		<< "Manufacturer: " << VehiclesArrayList[0].VehicleManufacturer()
		<< "\nYear built: " << VehiclesArrayList[0].VehicleYear() << endl << endl;

	cout << "Car:\n";
	VehiclesArrayList[1] = VehicleInformation();
	CarArrayList[0] = CarInformation();
	cout << "Vehicle Information: \n"
		<< "Manufacturer: " << VehiclesArrayList[1].VehicleManufacturer()
		<< "\nYear built: " << VehiclesArrayList[1].VehicleYear()
		<< "\nDoors: " << CarArrayList[0].ReturnHowManyDoors() << endl << endl;

	cin.ignore(); //the cin.ignore(); in VehicleInformation wouldn't work for the truck portion, had to add a extra one here
	cout << "Trucks:\n";
	VehiclesArrayList[2] = VehicleInformation();
	TruckArrayList[0] = TruckInformation();
	cout << "Vehicle Information: \n"
		<< "Manufacturer: " << VehiclesArrayList[2].VehicleManufacturer()
		<< "\nYear built: " << VehiclesArrayList[2].VehicleYear()
		<< "\nTowing capacity: " << TruckArrayList[0].ReturnTowingCapcity();
	
	return 0;
}

Vehicles  VehicleInformation() {
	Vehicles Veh;
	int Year;
	string Manufacturer;
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);
	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();
	Veh.StoreVehicleInformation(Manufacturer, Year);
	
	return Veh;
}

Trucks TruckInformation() {
	Trucks Tru;
	int TowingCapacity;
	cout << "Enter the towing capacity";
	cin >> TowingCapacity;
	Tru.StoreTowingCapacity(TowingCapacity);
	return Tru;
}

Cars CarInformation() {
	Cars Car;
	int HowManyDoors;
	cout << "Enter the number of doors: ";
	cin >> HowManyDoors;
	Car.SaveHowManyDoors(HowManyDoors);
	return Car;
}