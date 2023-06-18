#include <iostream>
#include "employee.h"

int main(void) {
	Employee empl1(25000);
	Employee empl2{ empl1 };
	Employee empl3 = empl1;
	empl1 = empl2;
	empl3 = empl3.f(empl3);

	return 0;
}