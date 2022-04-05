
#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"

void Person::input()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	fflush(stdin); 
	getline(cin, this->_persName);
	cout << "Nhap gioi tinh: ";
	cin >> _sex;
	cout << "Nhap tuoi: ";
	cin >> _age;
}

void Person::output()
{
	cout << "Ho Ten:" << this->_persName << endl;
	cout << "Gioi Tinh:" << this->_sex << endl;
	cout << "Tuoi:" << this->_age << endl;
}