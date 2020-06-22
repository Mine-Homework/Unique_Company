#pragma once
#include "PCH.h"

class Employee
{
protected:
	std::string name;
	std::string surname;
	std::string position;
	int age;
	double salary;
public:
	Employee();
	Employee(std::string name, std::string surname, std::string position, int age, double salary);
	void displayEmployee();
	// Getters
	double getSalary();
	std::string getName();
	std::string getSurname();
	double changeSalary(double salary);
};

