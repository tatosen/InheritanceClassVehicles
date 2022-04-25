#ifndef Vehicle_C_
#define Vehicle_C_

#include<string>
#include<iostream>

using namespace std;

class Vehicle_C
{
private:
	string manufacturer;
	int dateBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	void Set_VehicleManu(string);
	void Set_DateBuilt(int);

	string Get_VehicleManu() const;
	int Get_DateBuilt() const;

	void Display_Info();
};
#endif