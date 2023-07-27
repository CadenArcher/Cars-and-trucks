

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
Vehicles VehicleInformation(string&,int&);
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
	string Manufacturer;
	int Year;

	VehiclesArrayList[0] = VehicleInformation(Manufacturer, Year);
	cout << "Vehicle Information: \n";
	VehiclesArrayList[0].DisplayInfo();

	cout << "\nCar:\n";
	VehicleInformation(Manufacturer, Year);
	CarArrayList[0] = CarInformation();
	cout << "Vehicle Information: \n";
	CarArrayList[0].DisplayCarInfo(Manufacturer,Year);

	cin.ignore(); //the cin.ignore in VehicleInformation wouldn't work for the truck portion, had to add a extra one here
	cout << "\nTrucks:\n";
	VehicleInformation(Manufacturer, Year);
	TruckArrayList[0] = TruckInformation();
	cout << "Vehicle Information: \n";
	TruckArrayList[0].DisplayTruckInfo(Manufacturer, Year);

	return 0;
}

Vehicles  VehicleInformation(string& Manufacturer, int& Year) {
	Vehicles Veh;
	
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
	cout << "Enter the towing capacity: ";
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