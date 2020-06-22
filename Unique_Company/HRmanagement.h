#pragma once
#include "PCH.h"
#include "Employee.h"

class HRmanagement : public Employee
{
	std::vector<std::unique_ptr<Employee>> emp;
public:
	// Display
	void displayEmployees();
	// Add
	void addEmployee();
	// Change smth
	void changeSalary();
	void findEmployee();
	// Delete
	void deleteEmployee();
};

