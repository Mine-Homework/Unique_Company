#include "Menu.h"

Menu::Menu()
{
}

void Menu::displayMenu()
{
	menu();
	int choice;
	std::cout << "\n   --> ";
	std::cin >> choice;

	if (choice < 1 || choice > 5) {
		std::cout << "\n > You input incorrect number! " << std::endl;
	}
	else {
		switch (choice)
		{
		case 1:
			displayEmployees();
			break;
		case 2:
			findEmployee();
			break;
		case 3:
			changeSalary();
			break;
		case 4:
			addEmployee();
			break;
		case 5:
			deleteEmployee();
			break;
		}
	}
}

void Menu::menu()
{
	std::cout << "\n  __________________________ ";
	std::cout << "\n |1. Display ALL employees  |";
	std::cout << "\n |2. Find employee          |";
	std::cout << "\n |3. Change salary          |";
	std::cout << "\n |4. Add employee           |";
	std::cout << "\n |5. Delete employee        |";
	std::cout << "\n ****************************";
}
