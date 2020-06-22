#include "Employee.h"

Employee::Employee() : name("undef.name"), surname("undef.surname"), position("undef.position"), age(0), salary(0.0) {
}

Employee::Employee(std::string name, std::string surname, std::string position, int age, double salary)
	: name(name), surname(surname), position(position), age(age), salary(salary) {
}

void Employee::displayEmployee()
{
	std::cout << "\n =_=_=_=_=_=_=_=_=_=_=_=_=_= " << std::endl;
	std::cout << " Employee: " << name << " " << surname << std::endl;
	std::cout << " Position: " << position << std::endl;
	std::cout << " Age: " << age << " years" << std::endl;
	std::cout << " Salary: " << salary << " $ " << std::endl;
}

double Employee::getSalary()
{
	return salary;
}

std::string Employee::getName()
{
	return name;
}

std::string Employee::getSurname()
{
	return surname;
}

double Employee::changeSalary(double salary)
{
	return this->salary = salary;
}
