
#include "pch.h"
#include <iostream>
#include <string>

//Prototypes 
struct Employee;
enum TITLE;
void swap(Employee ** arr, int index, int swapIndex);
void changeTitle(Employee * emp, TITLE title);
std::string findEmployee(Employee** arr, int size, std::string name);
std::string findEmployeeByID(Employee** arr, int size, int id);
void bubbleSort(Employee** arr, int size);

enum  TITLE {
	Boss, Grunt, Supervisor
};

/*
Allows accessing the name associated with TITLE enum via index operator.
It seems odd that C++ can't print the enum without something like this.
*/
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

std::string findEmployeeByID(Employee** arr, int size, int id) {
	for (int i = 0; i < size; i++) {
		if (arr[i]->employeeNumber == id) {
			return arr[i]->print();
		}
	}
	return "Nobody with that ID found!";
};

void bubbleSort(Employee** arr, int size) {
	int i, j;
	bool swapped;
	for (i = 0; i < size - 1; i++) {
		swapped = false;
		for (j = 0;j < size - i - 1; j++) {
			Employee * one = arr[j];
			Employee * two = arr[j + 1];
			if (one->lastName.compare(two->lastName) > 0) {
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

	employees[0] = new Employee("susan", "Lotion", "508-580-8445", "123 fake street", "capetown", "BR", 55318, 1, TITLE::Boss);
	employees[1] = new Employee("renb", "James", "144-541-4646", "567 real lane", "Night Town", "BA", 45621, 5, TITLE::Grunt);

	employees[2] = new Employee("qwert", "Zamo", "508-580-8445", "123 fake street", "capetown", "BR", 33535, 101, TITLE::Boss);
	employees[3] = new Employee("fop", "Fahe", "144-541-4646", "4345 real lane", "Night Town", "BA", 11212, 88, TITLE::Grunt);

	employees[4] = new Employee("zee", "Reg", "508-580-8445", "11123 fake street", "capetown", "BR", 56455, 31, TITLE::Boss);
	employees[5] = new Employee("aardvark", "Aber", "144-541-4646", "5545 real lane", "Night Town", "BA", 45324, 605, TITLE::Grunt);

	employees[6] = new Employee("remy", "Hoola", "508-580-8445", "123 fake street", "capetown", "BR", 78965, 9898, TITLE::Boss);
	employees[7] = new Employee("cordelia", "Dell", "144-541-4646", "454 real lane", "Night Town", "BA", 11454, 505, TITLE::Grunt);

	employees[8] = new Employee("organza", "Forest", "508-580-8445", "342 f fake street", "capetown", "BR", 53232, 1132, TITLE::Boss);
	employees[9] = new Employee("qquaby", "Tasty", "144-541-4646", "4344 real lane", "Night Town", "BA", 83454, 2212, TITLE::Grunt);

	std::cout << "Printing unsorted employee list: " << std::endl << "-------" << std::endl;

	for (int i = 0;i < size;i++) {
		std::cout << employees[i]->print() << std::endl;
	}

	bubbleSort(employees, size);

	std::cout << std::endl << "Printing sorted employee list: " << std::endl << "-------" << std::endl;

	for (int i = 0;i < size;i++) {
		std::cout << employees[i]->print() << std::endl;
	}
	std::cout << std::endl << "Finding employee named susan: " << std::endl << "-------" << std::endl << findEmployee(employees, size, "susan") << std::endl;

	std::cout << std::endl << "Finding employee with ID 1132" << std::endl << "-------" << std::endl << findEmployeeByID(employees, size, 1132) << std::endl;

}


