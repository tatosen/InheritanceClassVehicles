#include"Vehicle_C.h"

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	dateBuilt = 0;
}

Vehicle_C::Vehicle_C(string manu, int dateB)
{
	manufacturer = manu;
	dateBuilt = dateB;
}

void Vehicle_C::Set_VehicleManu(string manu)
{
	manufacturer = manu;
}

void Vehicle_C::Set_DateBuilt(int dateB)
{
	dateBuilt = dateB;
}

string Vehicle_C::Get_VehicleManu() const
{
	return manufacturer;
}

int Vehicle_C::Get_DateBuilt() const
{
	return dateBuilt;
}

void Vehicle_C::Display_Info()
{
	cout << "\nVehicle:";
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nDate built: " << dateBuilt << "\n";
}