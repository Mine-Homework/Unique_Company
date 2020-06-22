#include "HRmanagement.h"

void HRmanagement::displayEmployees()
{
	if (emp.empty()) {
		std::cout << "\n ... Company is empty ..." << std::endl;
	}
	else {
		std::for_each(emp.begin(), emp.end(), [](std::unique_ptr<Employee>& e) {
			e->displayEmployee();
			});
	}
}

void HRmanagement::addEmployee()
{
	std::string name;
	std::cout << "\n> Input name: ";
	std::cin >> name;

	std::string surname;
	std::cout << "\n> Input surname: ";
	std::cin >> surname;

	std::string position;
	std::cout << "\n> Input position: ";
	std::cin >> position;

	int age;
	std::cout << "\n> Input age: ";
	std::cin >> age;

	int salary;
	std::cout << "\n> Input salary: ";
	std::cin >> salary;

	emp.push_back(std::make_unique<Employee>(name, surname, position, age, salary));
	std::cout << "\n> Employee was successfully added ! " << std::endl;
}

void HRmanagement::changeSalary()
{
	if (emp.empty()) {
		std::cout << "\n ... Company is empty ..." << std::endl;
	}
	else {
		std::string name;
		std::cout << "\n> Input name: ";
		std::cin >> name;

		std::string surname;
		std::cout << "\n> Input surname: ";
		std::cin >> surname;

		auto iter = std::find_if(emp.begin(), emp.end(), [name, surname](std::unique_ptr<Employee>& e) {
			return (e->getName() == name && e->getSurname() == surname);
			});
		if (iter == emp.end()) {
			std::cout << "\n ___ Employee doesn't exist! ___" << std::endl;
		}
		else {

		double salary;
		std::cout << "\n> Input future salary: ";
		std::cin >> salary;

		for (int i = 0; i < emp.size(); i++) {
			if (emp[i]->getName() == name && emp[i]->getSurname() == surname) {
				emp[i]->changeSalary(salary);
				std::cout << "\n > Salary was successfully changed ! " << std::endl;
			}
		}
	    }
    }
}

void HRmanagement::findEmployee()
{
	if (emp.empty()) {
		std::cout << "\n ... Company is empty ..." << std::endl;
	}
	else {
		std::string name;
		std::cout << "\n> Input name: ";
		std::cin >> name;

		std::string surname;
		std::cout << "\n> Input surname: ";
		std::cin >> surname;
		auto iter = std::find_if(emp.begin(), emp.end(), [name, surname](std::unique_ptr<Employee>& e) {
			return (e->getName() == name && e->getSurname() == surname);
			});
		if (iter == emp.end()) {
			std::cout << "\n ___ Employee doesn't exist! ___" << std::endl;
		}
		else {

			std::for_each(emp.begin(), emp.end(), [name, surname](std::unique_ptr<Employee>& e) {
				if (e->getName() == name && e->getSurname() == surname) {
					std::cout << "\n > Employee was found! ";
					e->displayEmployee();
				}
				});
		}
	}
}

void HRmanagement::deleteEmployee()
{
	if (emp.empty()) {
		std::cout << "\n ... Company is empty ..." << std::endl;
	}
	else {
		std::string name;
		std::cout << "\n> Input name: ";
		std::cin >> name;

		std::string surname;
		std::cout << "\n> Input surname: ";
		std::cin >> surname;

		auto iter = std::find_if(emp.begin(), emp.end(), [name, surname](std::unique_ptr<Employee>& e) {
			return (e->getName() == name && e->getSurname() == surname);
			});
		if (iter == emp.end()) {
			std::cout << "\n ___ Employee doesn't exist! ___" << std::endl;
		}
		else {
			emp.erase(iter);
			std::cout << "\n > Employee was successfully deleted! " << std::endl;
		}
	}
}

