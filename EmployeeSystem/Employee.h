#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>


class Employee {
private:
	std::string firstName;
	std::string lastName;
	std::string homePhone;
	std::string address;
	std::string city;
	std::string state;
	std::string zip;
	std::string employeeNumber;
	std::string jobTitle;

public:
	std::string print();

	Employee(std::string fName, std::string lName, std::string pNum, std::string add, std::string c, std::string s, std::string z, std::string num, std::string jTitle);

	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setPhone(std::string num);
	void setAddress(std::string address);
	void setCity(std::string city);
	void setZip(std::string zip);
	void setEmployeeNumber(std::string num);
	void setJobTitle(std::string title);

	std::string getFirstName();
	std::string getLastName();
	std::string getHomePhone();
	std::string getAddress();
	std::string getCity();
	std::string getZip();
	std::string getEmployeeNumber();
	std::string getJobTitle();


};

#endif