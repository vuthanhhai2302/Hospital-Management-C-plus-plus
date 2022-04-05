
#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"

string MedicalRecord::inputDocID()
{
	string _docID;
	cout << "Ma bac si chan doan: ";
	cin >> _docID;
	ifstream docStoredDatFile;
	docStoredDatFile.open("C:\dataEmp" + _docID + ".txt");
	if (docStoredDatFile)
	{
		return _docID;
	}
	else
	{
		cout << "\n Khong ton tai thong tin bac si!" << endl;
		return inputDocID();
	}
	cout << endl;
}

string MedicalRecord::inputPatID()
{
	string _patID;
	cout << "Ma benh nhan: ";
	cin >> _patID;
	ifstream docStoredDatFile;
	docStoredDatFile.open("C:\dataPat" + _patID + ".txt");
	if (docStoredDatFile)
	{
		return _patID;
	}
	else
	{
		cout << "\n Khong ton tai thong tin benh nhan!" << endl;
		return inputPatID();
	}
	cout << endl;
}


void MedicalRecord::inputMedicalRecord()
{
	cout << "Nhap thong tin benh an" << endl;
	cout << "Ma benh an: ";
	cin >> _medRecID;
	
	_docID = inputDocID();
	
	_patID = inputPatID();
	cout << "Chan doan cua bac si: ";
	cin.ignore();
	fflush(stdin);
	getline(cin, _docDiagnosis);
	cout << "Chi dinh cua bac si: ";
	fflush(stdin);
	getline(cin, _docDescription);

}

void MedicalRecord::outputMedicalRecord()
{
	cout << "Ma benh an: " << this->_medRecID << endl;
	cout << "Ma Bac Si chan Doan: " << this->_docID << endl;
	cout << "Ma benh nhan: " << this->_patID << endl;
	cout << "Chan doan cua bac si: " << this->_docDiagnosis << endl;
	cout << "Chi dinh cua bac si: " << this->_docDescription << endl;
	
}


void MedicalRecord::inputMedicalRecordToFile()
{
	ofstream file;

	//string c = "a";
	file.open("C:\dataMedRec" + _medRecID + ".txt", ios::out | ios::trunc);
	file << _medRecID << endl;
	file << _docID << endl << _patID << endl << _docDiagnosis << endl << _docDescription << endl;
	file.close();
}

void MedicalRecord::readMedicalRecordFromFile()
{
	string mrID;
	string mrDocID;
	string mrPatID;
	string mrDocDia;
	string mrDocDes;
	cout << "Nhap ID thuoc can xem:  ";
	cin >> mrID;
	ifstream read("C:\dataMedRec" + mrID + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay thuoc!" << std::endl;

	}
	else
	{
		getline(read, mrID);
		getline(read, mrDocID);
		getline(read, mrPatID);
		getline(read, mrDocDia);
		getline(read, mrDocDes);

		cout << "Ma benh an: " << mrID << endl;
		cout << "Ten Bac Si:" << mrDocID << endl;
		cout << "Ten benh nhan:" << mrPatID << endl;
		cout << "Chan doan bac si: " << mrDocDia << endl;
		cout << "Chi dinh bac si: " << mrDocDes << endl;
	}
}
void MedicalRecord::deteteMedicalRecordData()
{
	string id;
	int status;
	string nameStoredDatFile;
	cout << "Nhap vao id benh an can xoa: ";
	cin >> id;
	nameStoredDatFile = "C:\dataMedRec" + id + ".txt";
	status = remove(nameStoredDatFile.c_str());
	if (status == 0)
		cout << "\nXoa thong tin benh an thanh cong!";
	else
		cout << "\n Thong tin benh an khong ton tai!";
	cout << endl;
}