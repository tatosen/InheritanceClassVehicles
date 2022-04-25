#ifndef Suv_C_
#define Suv_C_

#include"Car_C.h"

class Suv_C : public Car_C
{
private:
	int tankCapacity;

public:
	Suv_C();
	Suv_C(int, int, string, int);

	int Get_TankCapacity() const;
	void Set_TankCapacity(int);

	void Display_Info();

};
#endif