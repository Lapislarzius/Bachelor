#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

class Employee {
	int salary = 20000;
	char* name;

public:

	Employee(int newSalary) {
		salary = newSalary;
		name = new char[80];


	}



	int getSalary() { return salary; }

	char* getName() { return name; }


};

#endif