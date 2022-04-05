
#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"

void Patient::inputPatient()
{
	cout << "Nhap thong tin benh nhan " << endl;
	cout << "Ma benh nhan: ";
	cin >> _patientID;
	Person::input();
	cout << "Phong so: ";
	cin >> _roomNumb;
}

void Patient::outputPatient()
{
	
	cout << "Ma benh nhan: " << this->_patientID << endl;
	Person::output();
	cout << "Phong so: " << this->_roomNumb << endl;
}


void Patient::inputPatientToFile()
{
	ofstream file;

	//string c = "a";
	file.open("C:\dataPat" + _patientID + ".txt", ios::out | ios::trunc);
	file << _patientID << endl << _persName << endl << _sex << endl << _age << endl << _roomNumb << endl;
	file.close();
}

void Patient::readPersonFromFile()
{
	string pID;
	string pName;
	string pSex;
	string pAge;
	string pRoomNumb;
	string id;
	cout << "Nhap ID benh nhan can xem:  ";
	cin >> id;
	ifstream read("C:\dataPat" + id + ".txt", ios::in);
	if (!read.is_open()) {
		
		cout << "Khong tim thay benh nhan!" << std::endl;
	
	}
	else
	{
		getline(read, pID);
		getline(read, pName);
		getline(read, pSex);
		getline(read, pAge);
		getline(read, pRoomNumb);
		cout << "Ma benh nhan la: " << pID << endl;
		cout << "Ten benh nhan la:" << pName << endl;
		cout << "Gioi tinh benh nhan la:" << pSex << endl;
		cout << "Tuoi benh nhan la:" << pAge << endl;
		cout << "Phong benh nhan la:" << pRoomNumb << endl;
	}
}
void Patient::detetePatientData()
{
	string id;
	int status;
	string nameStoredDatFile;
	cout << "Nhap vao id benh nhan can xoa: ";
	cin >> id;
	nameStoredDatFile = "C:\dataPat" + id + ".txt";
	status = remove(nameStoredDatFile.c_str());
	if (status == 0)
		cout << "\nXoa thong tin benh nhan thanh cong!";
	else
		cout << "\n Thong tin benh nhan khong ton tai!";
	cout << endl;
}