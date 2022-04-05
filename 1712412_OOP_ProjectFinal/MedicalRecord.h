#pragma once
#include"Header.h"

class MedicalRecord
{
private:
	string _medRecID;
	string _docDiagnosis;
	string _docDescription;
	string _docID;
	string _patID;
public:
	MedicalRecord()
	{
		this->_medRecID = "";
		this->_docDiagnosis = "";
		this->_docDescription = "";
		this->_docID = "";
		this->_patID = "";
	}
	~MedicalRecord()
	{
		this->_medRecID = "";
		this->_docDiagnosis = "";
		this->_docDescription = "";
		this->_docID = "";
		this->_patID = "";
	}
public:
	string inputDocID();
	string inputPatID();
	void inputMedicalRecord();
	void outputMedicalRecord();
	void inputMedicalRecordToFile();
	void readMedicalRecordFromFile();
	void deteteMedicalRecordData();

};

