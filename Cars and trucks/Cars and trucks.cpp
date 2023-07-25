

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
int main()
{
	const int MaxVehicles = 100;
	Vehicles List[MaxVehicles];
	Cars Work[MaxVehicles];
	Vehicles Veh; 
	Trucks Tru;
	List[0] = VehicleInformation();

	cout << "Vehicle Program\n\n"
		<< "Vehicle Information: \n"
		<< "Manufacturer: " << List[0].VehicleManufacturer()
		<< "\nYear built: " << List[0].VehicleYear() << endl << endl;

	cout << "Car:\n";
	List[1] = VehicleInformation();
	Work[0] = CarInformation();
	cout << "Vehicle Information: \n"
		<< "Manufacturer: " << List[1].VehicleManufacturer()
		<< "\nYear built: " << List[1].VehicleYear()
		<< "\nDoors: " << Work[0].ReturnHowManyDoors();


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
	Veh.StoreVehicleInformation(Manufacturer, Year);
	cin.ignore();
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