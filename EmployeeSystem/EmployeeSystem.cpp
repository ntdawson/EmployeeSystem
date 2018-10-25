
#include "pch.h"
#include <iostream>
#include <string>


enum  TITLE {
	Boss, Grunt, Supervisor
};

char const *jobTitles[]{
	"Boss",
	"Grunt",
	"Supervisor",
};

struct Employee {

	Employee(std::string fName, std::string lName, std::string pNum, std::string add, std::string c, std::string s, int z, int num, TITLE jTitle) {
		firstName = fName;
		lastName = lName;
		homePhone = pNum;
		address = add;
		city = c;
		state = s;
		zip = z;
		employeeNumber = num;
		jobTitle = jTitle;

	}
	std::string firstName;
	std::string lastName;
	std::string homePhone;
	std::string address;
	std::string city;
	std::string state;
	int zip;
	int employeeNumber;
	TITLE jobTitle;

	std::string print() {
		return firstName + " " + lastName + " " + address + " " + city + " " + state + " " + std::to_string(zip) + " " + std::to_string(employeeNumber) + " " + jobTitles[jobTitle];
	};
};


void sort(Employee ** arr, int size);
void swap(Employee ** arr, int index, int swapIndex);


void sort(Employee ** arr, int size)
{
};

void swap(Employee ** arr, int index, int swapIndex)
{
	Employee *temp = arr[index];
	arr[index] = arr[swapIndex];
	arr[swapIndex] = temp;

};


int main()
{


	Employee* (employees[10]);
	employees[0] = new Employee("susan", "jones", "508-580-8445", "123 fake street", "capetown", "BR", 50884, 0, TITLE::Boss);
	employees[1] = new Employee("Ezra", "James", "144-541-4646", "123 real lane", "Night Town", "BA", 53454, 55454, TITLE::Grunt);
	std::cout << sizeof(employees);
	std::cout << employees[0]->print();
	std::string s;
	std::cin >> s;


}


