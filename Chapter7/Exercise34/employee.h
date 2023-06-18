#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
class Employee {
	int salary = 20000;
	char* name;
	void swap(Employee& e);
public:
	Employee(int newSalary) {
		salary = newSalary;
		name = new char[80];
	}

	Employee(const Employee& e);
	~Employee();

	Employee& operator=(Employee e);
	Employee f(Employee& e);
	int getSalary() { return salary; }

	char* getName() { return name; }




};

#endif