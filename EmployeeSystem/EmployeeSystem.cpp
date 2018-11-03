
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

void changeTitle(Employee * emp, TITLE title) {
	emp->jobTitle = title;
};

std::string findEmployee(Employee** arr, int size, std::string name) {
	for (int i = 0; i < size; i++) {
		if (arr[i]->firstName == name || arr[i]->lastName == name) {
			return arr[i]->print();
		}
	}
	return "Nobody by that name found!";
};

void bubbleSort(Employee** arr, int size) {
	int i, j;
	bool swapped;
	for (i = 0; i < size - 1; i++) {
		swapped = false;
		for (j = 0;j < size - i - 1; j++) {
			Employee * one = arr[j];
			Employee * two = arr[j+1];
			if (one->lastName.compare(two->lastName)>0) {
				swap(arr, j, j + 1);
				swapped = true;
			}
		}
		if (swapped == false) {
			break;
		}
	}


};


int main()
{


	Employee* (employees[10]);

	for (int i = 0; i < 10; i++) {
		employees[i] = (Employee *)malloc(sizeof(Employee));
	};
	int size = sizeof(employees) / sizeof(employees[0]);

	employees[0] = new Employee("susan", "Lotion", "508-580-8445", "123 fake street", "capetown", "BR", 01015, 001, TITLE::Boss);
	employees[1] = new Employee("renb", "James", "144-541-4646", "123 real lane", "Night Town", "BA", 05051, 005, TITLE::Grunt);

	employees[2] = new Employee("qwert", "Zamo", "508-580-8445", "123 fake street", "capetown", "BR", 01015, 001, TITLE::Boss);
	employees[3] = new Employee("fop", "Fahe", "144-541-4646", "123 real lane", "Night Town", "BA", 05051, 005, TITLE::Grunt);

	employees[4] = new Employee("zee", "Reg", "508-580-8445", "123 fake street", "capetown", "BR", 01015, 001, TITLE::Boss);
	employees[5] = new Employee("aardvark", "Aber", "144-541-4646", "123 real lane", "Night Town", "BA", 05051, 005, TITLE::Grunt);


	//std::cout << sizeof(employees);

	//std::cout << employees[0]->print() << std::endl;
	//swap(employees, 0, 1);
	//std::cout << employees[0]->print() << std::endl;
	//changeTitle(employees[0], Boss);
	//std::cout << employees[0]->print() << std::endl;


	bubbleSort(employees, 5);

	for (int i = 0;i < 5;i++) {
		std::cout << employees[i]->print() << std::endl;
	}

	std::string s;
	std::cin >> s;


}


