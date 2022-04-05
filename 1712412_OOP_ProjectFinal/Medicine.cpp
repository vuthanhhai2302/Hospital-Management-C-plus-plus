
#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"
void Medicine::inputMedicine()
{
	
	cout << "Nhap thong tin Thuoc " << endl;
	cout << "Ma thuoc: ";
	cin >> _medID;
	cout << "Ten thuoc: ";
	cin.ignore();
	fflush(stdin);
	getline(cin, _medName);
	cout << "Nhap gia thuoc: ";
	cin >> _medPrice;
	cout << "Mo ta: ";
	cin.ignore();
	fflush(stdin);
	getline(cin, _medDescription);
}

void Medicine::outputMedicine()
{
	cout << "Ma thuoc: " << this->_medID << endl;
	cout << "Ten thuoc: " << this->_medName << endl;
	cout << "Nhap gia thuoc: " << this->_medPrice << endl;
	cout << "Mo ta: " << this->_medDescription << endl;
}


void Medicine::inputMedicineToFile()
{
	ofstream file;

	//string c = "a";
	file.open("C:\dataMed" + _medID + ".txt", ios::out | ios::trunc);
	file << _medID << endl << _medName << endl << _medPrice << endl << _medDescription << endl;
	file.close();
}

void Medicine::readMedicineFromFile()
{
	string mID;
	string mName;
	string mPrice;
	string mDes;
	string id;
	cout << "Nhap ID thuoc can xem:  ";
	cin >> id;
	ifstream read("C:\dataMed" + id + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay thuoc!" << std::endl;

	}
	else
	{
		getline(read, mID);
		getline(read, mName);
		getline(read, mPrice);
		getline(read, mDes);
		cout << "Ma thuoc la: " << mID << endl;
		cout << "Ten thuoc la:" << mName << endl;
		cout << "Gia thuoc la:" << mPrice << endl;
		cout << "Mo ta thuoc la:" << mDes << endl;
	}
}

Medicine Medicine::readMedicineFromFileInPrescript(string _medID)
{
	string mID;
	string mName;
	string mPrice;
	string mDes;
	
	ifstream read("C:\dataMed" + _medID + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay thuoc!" << std::endl;

	}
	else
	{
		getline(read, mID);
		getline(read, mName);
		getline(read, mPrice);
		getline(read, mDes);
		cout << "Ma thuoc la: " << mID << endl;
		cout << "Gia thuoc la:" << mPrice << endl;
	}
	float price = stof(mPrice);
	Medicine *med =  new Medicine(mID, mName, price, mDes);
	return *med;
}
float Medicine::readMedicinePriceFromFile(string _medID)
{
	string mPrice;
	string mID;
	string mName;
	float price;
	ifstream read("C:\dataMed" + _medID + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay thuoc!" << std::endl;

	}
	else
	{
		getline(read, mID);
		getline(read, mName);
		getline(read, mPrice);
	}
	price = stof(mPrice);
	return price;
}

void Medicine::deteteMedicineData()
{
	string id;
	int status;
	string nameStoredDatFile;
	cout << "Nhap vao id thuoc can xoa: ";
	cin >> id;
	nameStoredDatFile = "C:\dataMed" + id + ".txt";
	status = remove(nameStoredDatFile.c_str());
	if (status == 0)
		cout << "\nXoa thong tin thuoc thanh cong!";
	else
		cout << "\n Thong tin thuoc khong ton tai!";
	cout << endl;
}