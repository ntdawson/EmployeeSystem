#include "Employee.h"
#include "string"
#include "pch.h"

std::string Employee::print() {
	return firstName + ", " + lastName + ", " + address + ", " + city + ", " + state + ", " + zip + ", " + employeeNumber + ", " + jobTitle;
};

Employee::Employee(std::string fName, std::string lName, std::string pNum, std::string add, std::string c, std::string s, std::string z, std::string num, std::string jTitle) {
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

void Employee::setFirstName(std::string name) {
	Employee::firstName = name;
}
void Employee::setLastName(std::string name) {
	Employee::lastName = name;
}
void Employee::setPhone(std::string num) {
	Employee::homePhone = num;
}
void Employee::setAddress(std::string address) {
	Employee::address = address;
}
void Employee::setCity(std::string city) {
	Employee::city = city;
}
void Employee::setZip(std::string zip) {
	Employee::zip = zip;
}
void Employee::setEmployeeNumber(std::string num) {
	Employee::employeeNumber = num;
}
void Employee::setJobTitle(std::string title) {
	Employee::jobTitle = title;
}

std::string Employee::getFirstName() {
	return Employee::firstName;
}
std::string Employee::getLastName() {
	return Employee::lastName;
}
std::string Employee::getHomePhone() {
	return Employee::homePhone;
}
std::string Employee::getAddress() {
	return Employee::address;
}
std::string Employee::getCity() {
	return Employee::city;
}
std::string Employee::getZip() {
	return Employee::zip;
}
std::string Employee::getEmployeeNumber() {
	return Employee::employeeNumber;
}
std::string Employee::getJobTitle() {
	return Employee::jobTitle;
}
