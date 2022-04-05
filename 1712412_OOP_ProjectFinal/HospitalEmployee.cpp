#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"



void HospitalEmployee::inputEmployee()
{
	//cin.ignore();
	cout << "Nhap thong tin nhan vien" << endl;
	cout << "Ma nhan vien: ";
	cin >> _empID;
	Person::input();
	cout << "Vai tro nhan vien: ";
	//cin >> _empRole;
	cin.ignore();
	fflush(stdin);
	getline(cin, this->_empRole);
}

void HospitalEmployee::outputEmployee()
{

	cout << "Ma nhan vien: " << this->_empID << endl;
	Person::output();
	cout << "Vai tro nhan vien: " << this->_empRole << endl;
}


void HospitalEmployee::inputEmployeeToFile()
{
	ofstream file;

	//string c = "a";
	file.open("C:\dataEmp" + _empID + ".txt", ios::out | ios::trunc);
	file << _empID << endl << _persName << endl << _sex << endl << _age << endl << _empRole << endl;
	file.close();
}

void HospitalEmployee::readEmployeeFromFile()
{
	string eID;
	string eName;
	string eSex;
	string eAge;
	string eRole;
	string id;
	cout << "Nhap ID nhan vien can xem:  ";
	cin >> id;
	ifstream read("C:\dataEmp" + id + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay nhan vien!" << std::endl;

	}
	else
	{
		getline(read, eID);
		getline(read, eName);
		getline(read, eSex);
		getline(read, eAge);
		getline(read, eRole);
		cout << "Ma nhan vien la: " << eID << endl;
		cout << "Ten nhan vien la:" << eName << endl;
		cout << "Gioi tinh nhan vien la:" << eSex << endl;
		cout << "Tuoi nhan vien la:" << eAge << endl;
		cout << "Vai tro nhan vien la:" << eRole << endl;
	}
}
void HospitalEmployee::deteteEmployeeData()
{
	string id;
	int status;
	string nameStoredDatFile;
	cout << "Nhap vao id nhan vien can xoa: ";
	cin >> id;
	nameStoredDatFile = "C:\dataEmp" + id + ".txt";
	status = remove(nameStoredDatFile.c_str());
	if (status == 0)
		cout << "\nXoa thong tin nhan vien thanh cong!";
	else
		cout << "\n Thong tin nhan vien khong ton tai!";
	cout << endl;
}