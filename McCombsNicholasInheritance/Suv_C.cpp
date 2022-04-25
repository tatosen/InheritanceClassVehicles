#include "Suv_C.h"

Suv_C::Suv_C() : Car_C()
{
	tankCapacity = 0;
}

Suv_C::Suv_C(int tankC, int numD, string manu, int dateB) : Car_C(numD, manu, dateB)
{
	tankCapacity = tankC;
}

void Suv_C::Set_TankCapacity(int tankC)
{
	tankCapacity = tankC;
}

int Suv_C::Get_TankCapacity() const
{
	return tankCapacity;
}

void Suv_C::Display_Info()
{
	cout << "\nSUV:";
	cout << "\nSuv manufacturer: " << Get_VehicleManu();
	cout << "\nSuv date built: " << Get_DateBuilt();
	cout << "\nSuv number of doors: " << Get_NumDoors();
	cout << "\nSuv tank capacity: " << tankCapacity << "\n";
}