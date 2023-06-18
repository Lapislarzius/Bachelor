#include "employee.h"
#include <iostream>

Employee::Employee(const Employee& e)
{
	std::cout << "Hier Kopierkonstruktor" << std::endl;
	name = new char[80];
	strncpy(name, e.name, 80);
	salary = e.salary + 1;
}

void Employee::swap(Employee& e)
{
	std::swap(e.salary, salary);
	std::swap(e.name, name);
}

Employee& Employee::operator=(Employee e)
{
	std::cout << "Hier Zuweisungsoperator" << std::endl;
	swap(e);
	return *this;
}

Employee::~Employee()
{
	std::cout << "Hier Destruktor (sal=" << salary << ")" << std::endl;
	if (name)
		delete[] name;
}

//--------------------------------------------
Employee Employee::f(Employee& e) {
	return e;
}