

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

 //the cin.ignore in VehicleInformation wouldn't work for the truck portion, had to add a extra one here
	

	return 0;
}

void VehicleInformation() {
	Vehicles Vehicle;
	string  Manufacturer;
	int Year;
	
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);
	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();
	Vehicle.StoreVehicleInformation(Manufacturer, Year);
	Vehicle.DisplayInfo();
	cout << endl;
}

void TruckInformation() {
	string Manufacturer;
	int Year;
	Trucks Truck;
	int TowingCapacity;
	cin.ignore();
	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);

	cout << "Enter the year built: ";
	cin >> Year;
	
	
	
	cout << "Enter the towing capacity: ";
	cin >> TowingCapacity;

	Truck.StoreTowingCapacity(TowingCapacity);

	cout << "\nTrucks:\n";
	Truck.StoreVehicleInformation(Manufacturer, Year);

	cout << "Vehicle Information: \n";
	Truck.DisplayTruckInfo();
	cout << endl;

}

void CarInformation() {
	string Manufacturer;
	int Year;
	Cars Car;
	int HowManyDoors;

	cout << "Enter the manufacturer: ";
	getline(cin, Manufacturer);

	cout << "Enter the year built: ";
	cin >> Year;
	cin.ignore();

	cout << "Enter the number of doors: ";
	cin >> HowManyDoors;

	Car.SaveHowManyDoors(HowManyDoors);

	cout << "\Cars:\n";
	Car.StoreVehicleInformation(Manufacturer, Year);

	cout << "Vehicle Information: \n";
	Car.DisplayCarInfo();
	cout << endl;


}