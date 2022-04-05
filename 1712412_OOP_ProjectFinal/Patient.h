#pragma once
#include"Header.h"


class Patient:public Person
{
public:
	string _patientID;
private:
	string _roomNumb;
public:
	Patient()
	{
		this->_patientID = "";
		this->_roomNumb = "";
	}
	~Patient()
	{
		this->_patientID = "";
		this->_roomNumb = "";
	}
public:
	void inputPatient();
	void outputPatient();
	void inputPatientToFile();
	void readPersonFromFile();
	void detetePatientData();


};

