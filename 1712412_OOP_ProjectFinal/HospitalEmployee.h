#pragma once
#include"Header.h"


class HospitalEmployee :public Person
{
public:
	string _empID;
private:
	string _empRole;
public:
	HospitalEmployee()
	{
		this->_empID = "";
		this->_empRole = "";
	}
	~HospitalEmployee()
	{
		this->_empID = "";
		this->_empRole = "";
	}
public:
	void inputEmployee();
	void outputEmployee();
	void inputEmployeeToFile();
	void readEmployeeFromFile();
	void deteteEmployeeData();


};

