#include"Car_C.h"

Car_C::Car_C() : Vehicle_C()
{
	numDoors = 0;
}

Car_C::Car_C(int numD) : Vehicle_C()
{
	numDoors = numD;
}

Car_C::Car_C(int numD, string manu, int dateB) : Vehicle_C(manu, dateB)
{
	numDoors = numD;

}

int Car_C::Get_NumDoors() const
{
	return numDoors;
}

void Car_C::Set_NumDoors(int numD)
{
	numDoors = numD;
}

void Car_C::Display_Info()
{
	cout << "\nCar:";
	cout << "\nManufacturer: " << Get_VehicleManu();
	cout << "\nVehicle date built: " << Get_DateBuilt();
	cout << "\nVehicle number of doors: " << numDoors << "\n";
}