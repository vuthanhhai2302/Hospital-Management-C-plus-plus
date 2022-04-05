#pragma once
#include"Header.h"

class Medicine
{
private:
	string _medID;
	string _medName;
	float _medPrice;
	string _medDescription;
public:
	Medicine()
	{
		this->_medDescription = "";
		this->_medID = "";
		this->_medName = "";
		this->_medPrice = 0;
	}
	~Medicine()
	{
		this->_medDescription = "";
		this->_medID = "";
		this->_medName = "";
		this->_medPrice = 0;
	}
	Medicine(string medID, string medName, float medPrice, string medDescription)
	{
		this->_medDescription = medDescription;
		this->_medID = medID;
		this->_medName = medName;
		this->_medPrice = medPrice;
	}
public:
	string getMedName() { return _medName; }
	string getMedID() { return _medID; }
	float getMedPrice( string _medID) { return _medPrice; }
public:
	void inputMedicine();
	void outputMedicine();
	void inputMedicineToFile();
	void readMedicineFromFile();
	Medicine readMedicineFromFileInPrescript(string medID);
	float readMedicinePriceFromFile(string medID);
	void deteteMedicineData();







};

