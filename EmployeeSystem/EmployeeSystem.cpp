
#include "pch.h"
#include <iostream>
#include <string>

struct Employee {
	std::string firstName;
	std::string lastName;
	std::string homePhone;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int employeeNumber;
	enum class TITLE  {
		Boss, Grunt, Supervisor
	};
};

int main()
{
    std::cout << "Hello World!\n"; 
	/*testing pushh*/
	std::cout << "test";
}

