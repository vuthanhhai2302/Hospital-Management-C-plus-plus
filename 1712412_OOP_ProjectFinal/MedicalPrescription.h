#pragma once
#include"Header.h"
#include"Medicine.h"

class MedicalPrescription
{
	string _medPresID;
	string _medRecID;
	Medicine _medicine[100];
	int _numbOfMed;
	float _totalBill;
public:
	MedicalPrescription()
	{
		this->_medPresID = "";
		this->_medRecID = "";
		this->_numbOfMed = 0;
		this->_totalBill = 0;
	}
	~MedicalPrescription()
	{
		this->_medPresID = "";
		this->_medRecID = "";
		this->_numbOfMed = 0;
		this->_totalBill = 0;
	}
public:
	string inputMedRecID();
	string inputMedID(int numbOfMed);
	void inputMedicalPrescription();
	void outputMedicalPrescription();
	void inputMedicalPrescriptionToFile();
	void readMedicalPrescriptionFromFile();
	void deteteMedicalPrescriptionData();
public:
	Medicine* getMedicine() { return _medicine; }

};

