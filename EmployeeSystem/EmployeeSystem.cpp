


#include "pch.h"
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

enum  TITLE {
	Boss, Grunt, Supervisor
};

char const *jobTitles[]{
	"Boss",
	"Grunt",
	"Supervisor",
};


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
	Employee* (employees[10]);
	employees[0] = new Employee("susan", "jones", "508-580-8445", "123 fake street", "capetown", "BR", "01015", "001", "Boss");
	employees[1] = new Employee("Ezra", "James", "144-541-4646", "123 real lane", "Night Town", "BA", "05051", "005", "Grunt");
	//std::cout << sizeof(employees);
	std::cout << employees[0]->print() << std::endl;
	swap(employees, 0, 1);
	std::cout << employees[0]->print() << std::endl;
	
	std::ofstream file;
	file.open("test.txt");
	for (int i = 0;i < 2;i++) {
		file << employees[i]->print() << std::endl;
	}

	
	
	std::getchar();


}


