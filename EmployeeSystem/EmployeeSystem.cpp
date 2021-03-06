


#include "pch.h"
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

enum  TITLE {
	Boss, Grunt, Supervisor
};

char const *jobTitles[]{
	"Boss",
	"Grunt",
	"Supervisor",
};

void add(Employee ** arr, Employee* emp) {
	arr[6] = emp;
}
void sort(Employee ** arr, int size);
void swap(Employee ** arr, int index, int swapIndex);


void sort(Employee ** arr, int size)
{
	int i, j;
	bool swapped;
	for (i = 0;i < size;i++) {
		swapped = false;
		for (j = 0;j < size - i - 1;j++) {
			Employee * one = arr[j];
			Employee * two = arr[j + 1];
			if (one->getLastName().compare(two->getLastName()) > 0) {
				swap(arr, j, j + 1);
				swapped = true;
			}
		}
		if (swapped = false) {
			break;
		}
	}

};

void swap(Employee ** arr, int index, int swapIndex)
{
	Employee *temp = arr[index];
	arr[index] = arr[swapIndex];
	arr[swapIndex] = temp;

};

int main()
{
	//while (true) {
		/*std::cout << "Please choose from the menu:" << std::endl <<
			"Choice 1: Load the employee list" << std::endl <<
			"Choice 2: Create a new employee" << std::endl <<
			"Choice 3: Change an employees' title" << std::endl <<
			"Choice 4: Remove an employee from the list" << std::endl <<
			"Choice 5: Sort the employee list by surname" << std::endl <<
			"Choice 6: Write the employee list to employee.txt" << std::endl <<
			"Choice 7: Find an employee by name or number" << std::endl <<
			"Choice 8: Print out the employee list" << std::endl <<
			"Choice 9: Exit the system";

		int choice;
		std::cin >> choice;
		switch (choice) {
		case 1:

		case 2:

		case 3:

		case 4:

		case 5:

		case 6:

		case 7:

		case 8:

		case 9:
			goto exit;
		}

	exit:
		break;

*/
	Employee* (employees[10]);
	employees[0] = new Employee("susan", "Jones", "508-580-8445", "123 fake street", "capetown", "BR", "01015", "001", "Boss");
	employees[1] = new Employee("Ezra", "James", "144-541-4646", "123 real lane", "Night Town", "BA", "05051", "005", "Grunt");
	employees[2] = new Employee("Lacy", "Fra", "1423-541-4646", "155 nope street", "Lae Town", "BZ", "04451", "021", "Grunt");
	employees[3] = new Employee("Lacy", "Gre", "1423-541-4646", "155 nope street", "Lae Town", "BZ", "04451", "021", "Grunt");
	employees[4] = new Employee("Ferrr", "Zae", "1423-541-4646", "155 nope street", "Lae Town", "BZ", "04451", "021", "Grunt");
	employees[5] = new Employee("Fjuj", "Oep", "1423-541-4646", "25252 nope street", "Faj Town", "BZ", "04451", "021", "Grunt");
	//std::cout << sizeof(employees);
	//std::cout << employees[0]->print() << std::endl;
	//swap(employees, 0, 1);
	//std::cout << employees[0]->print() << std::endl;
	//sort(employees, 6);

	//std::cout << employees[0]->print() << std::endl;

	//std::cout << employees[1]->print() << std::endl;

	//std::cout << employees[2]->print() << std::endl;
	//std::cout << employees[3]->print() << std::endl;
	//std::cout << employees[4]->print() << std::endl;
	//std::cout << employees[5]->print() << std::endl;
	std::ofstream file;
	file.open("test.txt");
	for (int i = 0;i < 3;i++) {
		file << employees[i]->print() << std::endl;
	}
	file.close();


	//std::getchar();
	std::ifstream inputFile;
	inputFile.open("test.txt");
	std::string line;

	while (inputFile.is_open())
	{
		std::string s;
		if (!getline(inputFile, s)) break;

		while (getline(inputFile, s, ','))
		{

			std::istringstream iss(s);
			iss >> std::noskipws;
			iss >> line;
			std::cout << line;



		}
		if (!inputFile.eof())
		{
			std::cerr << "Fooey!\n";
		}
	
	}
	std::getchar();
}

