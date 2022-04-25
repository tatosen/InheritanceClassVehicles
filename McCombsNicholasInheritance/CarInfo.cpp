/*
Nicholas McCombs
04/25/2022
CIS 1202 R02
*/

#include"Suv_C.h"

void Display_Data(Vehicle_C& obj);
void Display_Data(Car_C& obj);
void Display_Data(Suv_C& obj);

int main()
{
	string manufacturer;
	int dateBuilt;
	int numDoors;
	int tankCapacity;

	Vehicle_C vehicle;
	Car_C car;
	Suv_C suv;

	cout << "\nEnter the name of the manufacturer: ";
	getline(cin, manufacturer);
	cout << "\nEnter the date built: ";
	cin >> dateBuilt;

	vehicle.Set_VehicleManu(manufacturer);
	vehicle.Set_DateBuilt(dateBuilt);

	Display_Data(vehicle);

	cin.ignore();

	cout << "\nEnter the name of the manufacturer: ";
	getline(cin, manufacturer);
	cout << "\nEnter the date built: ";
	cin >> dateBuilt;
	cout << "\nEnter the number of doors: ";
	cin >> numDoors;

	car.Set_VehicleManu(manufacturer);
	car.Set_DateBuilt(dateBuilt);
	car.Set_NumDoors(numDoors);

	Display_Data(car);

	cin.ignore();

	cout << "\nEnter the name of the manufacturer: ";
	getline(cin, manufacturer);
	cout << "\nEnter the date built: ";
	cin >> dateBuilt;
	cout << "\nEnter the number of doors: ";
	cin >> numDoors;
	cout << "\nEnter the tank capacity: ";
	cin >> tankCapacity;

	suv.Set_VehicleManu(manufacturer);
	suv.Set_DateBuilt(dateBuilt);
	suv.Set_NumDoors(numDoors);
	suv.Set_TankCapacity(tankCapacity);

	Display_Data(suv);

	cout << endl << endl;
	system("pause");
	return 0;
}

void Display_Data(Vehicle_C& obj)
{
	obj.Display_Info();
}

void Display_Data(Car_C& obj)
{
	obj.Display_Info();
}

void Display_Data(Suv_C& obj)
{
	obj.Display_Info();
}