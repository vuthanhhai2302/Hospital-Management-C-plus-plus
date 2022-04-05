#include "MedicalPrescription.h"
string MedicalPrescription::inputMedRecID()
{
	string _medRecID;
	cout << "Ma benh an chan doan: ";
	cin >> _medRecID;
	ifstream docStoredDatFile;
	docStoredDatFile.open("C:\dataMedRec" + _medRecID + ".txt");
	if (docStoredDatFile)
	{
		return _medRecID;
	}
	else
	{
		cout << "\n Khong ton tai ho so benh an!" << endl;
		return inputMedRecID();
	}
	cout << endl;
}

string MedicalPrescription::inputMedID(int numbOfMed)
{
	string _medID;
	Medicine med;
	for (int i = 0; i < _numbOfMed; i++)
	{
		cout << "Nhap ma thuoc: ";
		cin >> _medID;
		_medicine[i] = med.readMedicineFromFileInPrescript(_medID);
		_totalBill += med.readMedicinePriceFromFile(_medID);
	}
	return _medID;
	cout << endl;
}


void MedicalPrescription::inputMedicalPrescription()
{
	int numbOfMed;
	cout << "Nhap thong tin don thuoc" << endl;
	_medRecID = inputMedRecID();
	cout << "Nhap ma don thuoc:";
	cin >> _medPresID;
	cout << "Nhap so luong thuoc can ke: ";
	cin >> _numbOfMed;
	inputMedID(_numbOfMed);
}

void MedicalPrescription::outputMedicalPrescription()
{
	cout << "Ma benh an: " << this->_medRecID << endl;
	cout << "Ma don thuoc: " << this->_medPresID << endl;
	cout << "So luong thuoc da ke: " << this->_numbOfMed << endl;
	for (int i = 0; i < _numbOfMed; i++)
	{
		_medicine[i].outputMedicine();
	}
	cout << "Tong hoa don don thuoc la: ";
	cout<< _totalBill;
}


void MedicalPrescription::inputMedicalPrescriptionToFile()
{
	ofstream file;

	/*for (int i = 0; i < _numbOfMed; i++)
	{	
		Medicine medicine = _medicine[i];
	}*/
	file.open("C:\dataMedPres" + _medPresID + ".txt", ios::out | ios::trunc);
	file << _medRecID << endl;
	file << _medPresID << endl;
	for (int i = 0; i < _numbOfMed; i++)
	{
		file << _medicine[i].getMedID() << endl;
	}
	file << _totalBill << endl;
}

void MedicalPrescription::readMedicalPrescriptionFromFile()
{
	string mrID;
	string mpID;
	string mID[100];
	string totalBill;
	string mrDocDes;
	cout << "Nhap ID thuoc can xem: ";
	cin >> mpID;
	ifstream read("C:\dataMedPres" + mpID + ".txt", ios::in);
	if (!read.is_open()) {

		cout << "Khong tim thay thuoc!" << std::endl;

	}
	else
	{

		getline(read, mrID);
		getline(read, mpID);
		for (int i = 0; i < _numbOfMed; i++)
		{
			getline(read, mID[i]);
		}
		getline(read, totalBill);


		cout << "Ma benh an: " << mrID << endl;
		cout << "Ma don thuoc:" << mpID << endl;
		for (int i = 0; i < _numbOfMed; i++)
		{
			cout << "Ma Thuoc:" << mpID[i] << endl;
		}
		cout << "Tong Hoa Don: " << totalBill << endl;
	}
}
void MedicalPrescription::deteteMedicalPrescriptionData()
{
	string id;
	int status;
	string nameStoredDatFile;
	cout << "Nhap vao id don thuoc can xoa: ";
	cin >> id;
	nameStoredDatFile = "C:\dataMedPres" + id + ".txt";
	status = remove(nameStoredDatFile.c_str());
	if (status == 0)
		cout << "\nXoa thong tin benh an thanh cong!";
	else
		cout << "\n Thong tin benh an khong ton tai!";
	cout << endl;
}