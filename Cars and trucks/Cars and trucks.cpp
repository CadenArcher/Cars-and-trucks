

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
void TruckInformation();
int main()
{
	const int MaxVehicles = 1;
	Vehicles VehiclesArrayList[MaxVehicles];
	Cars CarArrayList[MaxVehicles];
	Trucks TruckArrayList[MaxVehicles];
	Vehicles Veh; 

	

	TruckInformation();

 //the cin.ignore in VehicleInformation wouldn't work for the truck portion, had to add a extra one here
	

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

void TruckInformation() {
	string Manufacturer;
	int Year;
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);
	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();
	Trucks Tru;
	int TowingCapacity;
	cout << "Enter the towing capacity: ";
	cin >> TowingCapacity;
	cout << TowingCapacity;
	Tru.StoreTowingCapacity(TowingCapacity);
	cout << "\nTrucks:\n";
	Tru.StoreVehicleInformation(Manufacturer, Year);
	cout << "Vehicle Information: \n";
	Tru.DisplayTruckInfo();

}

Cars CarInformation() {
	Cars Car;
	int HowManyDoors;
	cout << "Enter the number of doors: ";
	cin >> HowManyDoors;
	Car.SaveHowManyDoors(HowManyDoors);

	return Car;
}