
#include "pch.h"
#include <iostream>
#include <string>

struct Employee {

	 Employee(std::string firstName, std::string lastName, std::string homePhone, std::string address, std::string city, std::string state, int zip, int employeeNumber, Employee::TITLE jobTitle) {

	}
	std::string firstName;
	std::string lastName;
	std::string homePhone;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int employeeNumber;
	enum  TITLE  {
		Boss, Grunt, Supervisor
	};

	std::string print() {
		return firstName + " " + lastName + " " + address + " " + city + " " + state + " " + std::to_string(zip) + " " + std::to_string(employeeNumber) + " " + std::to_string(TITLE);
	};
};

int main()
{
	std::string jobTitles = std::string{ "Boss", "Grunt", "Supervisor" };

	Employee* (employees[10]);
	employees[0] = new Employee("susan", "jones", "508-580-8445", "123 fake street", "capetown", "BR", 50884, 0, Employee::TITLE::Boss);

    std::cout << "Hello World!\n"; 
	/*testing pushh*/
	std::cout << "test";
}

