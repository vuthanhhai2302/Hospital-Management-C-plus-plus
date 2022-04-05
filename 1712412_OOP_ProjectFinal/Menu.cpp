#include"Header.h"

#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"
#include"MedicalPrescription.h"



void mainMenu()
{
	int choiceMain;
	system("cls");
	cout << "---Welcome to 1712412 Hospital Management Program---" << endl;
	cout << "=====================MAIN MENU=======================" << endl;
	cout << "<1>  QUAN LY BENH NHAN" << endl;
	cout << "<2>  QUAN LY NHAN VIEN BENH VIEN" << endl;
	cout << "<3>  QUAN LY QUAN LY THUOC" << endl;
	cout << "<4>  QUAN LY QUAN LY HO SO BENH AN" << endl;
	cout << "<5>  QUAN LY QUAN LY DON THUOC" << endl;
	cout << "<6>  THOAT" << endl;
	cout << "Your choice:";
	cin >> choiceMain;
	switch (choiceMain)
	{
	case 1:
		system("cls");
		patientMenu();
		break;
	case 2:
		system("cls");
		employeeMenu();
		break;
	case 3:
		system("cls");
		medicineMenu();
		break;
	case 4:
		system("cls");
		medicalRecordMenu();
		break;
	case 5:
		system("cls");
		medicalPrescriptMenu();
		break;
	default:
		system("cls");
		cout << "Hen gap lai!" << endl;
		exit(0);
		break;
	}
}
void returnToMainPatientOrExit()
{
	int choice;
	cout << endl;
	cout << "Ban muon lam gi tiep theo?" << endl;
	cout << "<1> Quay ve menu benh nhan		<2> Exit" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		patientMenu();
	}
	else if (choice == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		returnToMainPatientOrExit();
	}
}
void patientMenu()
{
	int patientMenuChoice;
	Patient p;
	system("cls");
	cout << "=====================PATIENT MENU=======================" << endl;
	cout << "<1>  XEM THONG TIN BENH NHAN" << endl;
	cout << "<2>  THEM THONG TIN BENH NHAN" << endl;
	cout << "<3>  SUA THONG TIN BENH NHAN" << endl;
	cout << "<4>  XOA THONG TIN BENH NHAN" << endl;
	cout << "<5>  TRO VE MENU CHINH" << endl;
	cout << "========================================================" << endl;

	cout << "Your choice:";
	cin >> patientMenuChoice;
	switch (patientMenuChoice)
	{
	case 1:
		system("cls");
		p.readPersonFromFile();
		returnToMainPatientOrExit();
		break;
	case 2:
		system("cls");
		p.inputPatient();
		p.inputPatientToFile();
		returnToMainPatientOrExit();
		break;
	case 3:
		system("cls");
		p.inputPatient();
		p.inputPatientToFile();
		returnToMainPatientOrExit();
		break;
	case 4:
		system("cls");
		p.detetePatientData();
		returnToMainPatientOrExit();
		break;
	case 5:
		system("cls");
		mainMenu();
		break;
	default:
		system("cls");
		cout << "Nhap lua chon khong hop le, vui long chon lai" << endl;
		patientMenu();
	}
}
void returnToMainEmpOrExit()
{
	int choice;
	cout << endl;
	cout << "Ban muon lam gi tiep theo?" << endl;
	cout << "<1> Quay ve menu nhan vien		<2> Exit" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		employeeMenu();
	}
	else if (choice == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		returnToMainEmpOrExit();
	}
}
void employeeMenu()
{
	int employeeMenuChoice;
	HospitalEmployee e;
	system("cls");

	cout << "=====================EMPLOYEE MENU=======================" << endl;
	cout << "<1>  XEM THONG TIN NHAN VIEN BENH VIEN" << endl;
	cout << "<2>  THEM THONG TIN NHAN VIEN BENH VIEN" << endl;
	cout << "<3>  SUA THONG TIN NHAN VIEN BENH VIEN" << endl;
	cout << "<4>  XOA THONG TIN NHAN VIEN BENH VIEN" << endl;
	cout << "<5>  TRO VE MENU CHINH" << endl;

	cout << "Your choice:";
	cin >> employeeMenuChoice;
	switch (employeeMenuChoice)
	{
	case 1:
		system("cls");
		e.readEmployeeFromFile();
		returnToMainEmpOrExit();
		break;
	case 2:
		system("cls");
		e.inputEmployee();
		e.inputEmployeeToFile();
		returnToMainEmpOrExit();
		break;
	case 3:
		system("cls");
		e.inputEmployee();
		e.inputEmployeeToFile();
		returnToMainEmpOrExit();
		break;
	case 4:
		system("cls");
		e.deteteEmployeeData();
		returnToMainEmpOrExit();
		break;
	case 5:
		system("cls");
		mainMenu();
		break;
	default:
		system("cls");
		cout << "Nhap lua chon khong hop le, vui long chon lai" << endl;
		patientMenu();
	}
}
void returnToMainMedOrExit()
{
	int choice;
	cout << endl;
	cout << "Ban muon lam gi tiep theo?" << endl;
	cout << "<1> Quay ve menu chinh		<2> Exit" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		medicineMenu();
	}
	else if (choice == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		returnToMainMedOrExit();
	}
}
void medicineMenu()
{
	int medicineMenuChoice;
	Medicine m;
	system("cls");

	cout << "=====================MEDICINE MENU=======================" << endl;
	cout << "<1>  XEM THONG TIN THUOC" << endl;
	cout << "<2>  THEM THONG TIN THUOC" << endl;
	cout << "<3>  SUA THONG TIN THUOC" << endl;
	cout << "<4>  XOA THONG TIN THUOC" << endl;
	cout << "<5>  TRO VE MENU CHINH" << endl;

	cout << "Your choice:";
	cin >> medicineMenuChoice;
	switch (medicineMenuChoice)

	{
	case 1:
		system("cls");
		m.readMedicineFromFile();
		returnToMainMedOrExit();
		break;
		
	case 2:
		system("cls");
		m.inputMedicine();
		m.inputMedicineToFile();
		returnToMainMedOrExit();
		break;
	case 3:
		system("cls");
		m.inputMedicine();
		m.inputMedicineToFile();
		returnToMainMedOrExit();
		break;
	case 4:
		system("cls");
		m.deteteMedicineData();
		returnToMainMedOrExit();
		break;
	case 5:
		system("cls");
		mainMenu();
		break;
	default:
		system("cls");
		cout << "Nhap lua chon khong hop le, vui long chon lai" << endl;
		patientMenu();
	}
}
void returnToMainRecordOrExit()
{
	int choice;
	cout << endl;
	cout << "Ban muon lam gi tiep theo?" << endl;
	cout << "<1> Quay ve menu benh an		<2> Exit" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		medicalRecordMenu();
	}
	else if (choice == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		returnToMainRecordOrExit();
	}
}
void medicalRecordMenu()
{
	int medicalRecordMenuChoice;
	MedicalRecord mr;
	system("cls");

	cout << "===================MEDICAL RECORD MENU=====================" << endl;
	cout << "<1>  XEM THONG TIN BENH AN" << endl;
	cout << "<2>  THEM THONG TIN BENH AN" << endl;
	cout << "<3>  SUA THONG TIN BENH AN" << endl;
	cout << "<4>  XOA THONG TIN BENH AN" << endl;
	cout << "<5>  TRO VE MENU CHINH" << endl;

	cout << "Your choice:";
	cin >> medicalRecordMenuChoice;
	switch (medicalRecordMenuChoice)
	{
	case 1:
		system("cls");
		mr.readMedicalRecordFromFile();
		returnToMainRecordOrExit();
		break;
	case 2:
		system("cls");
		mr.inputMedicalRecord();
		mr.inputMedicalRecordToFile();
		returnToMainRecordOrExit();
		break;
	case 3:
		system("cls");
		mr.inputMedicalRecord();
		mr.inputMedicalRecordToFile();
		returnToMainRecordOrExit();
		break;
	case 4:
		system("cls");
		mr.deteteMedicalRecordData();
		returnToMainRecordOrExit();
		break;
	case 5:
		system("cls");
		mainMenu();
		break;
	default:
		system("cls");
		cout << "Nhap lua chon khong hop le, vui long chon lai" << endl;
		patientMenu();
	}
}
void returnToMainPresOrExit()
{
	int choice;
	cout << endl;
	cout << "Ban muon lam gi tiep theo?" << endl;
	cout << "<1> Quay ve menu don thuoc		<2> Exit" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		medicalPrescriptMenu();
	}
	else if (choice == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		returnToMainPresOrExit();
	}
}
void medicalPrescriptMenu()
{
	int medicalPrescriptMenuChoice;
	MedicalPrescription mp;
	system("cls");

	cout << "===================MEDICAL RECORD MENU=====================" << endl;
	cout << "<1>  XEM THONG TIN DON THUOC" << endl;
	cout << "<2>  THEM THONG TIN DON THUOC" << endl;
	cout << "<3>  SUA THONG TIN DON THUOC" << endl;
	cout << "<4>  XOA THONG TIN DON THUOC" << endl;
	cout << "<5>  TRO VE MENU CHINH" << endl;

	cout << "Your choice:";
	cin >> medicalPrescriptMenuChoice;
	switch (medicalPrescriptMenuChoice)
	{
	case 1:
		system("cls");
		mp.readMedicalPrescriptionFromFile();
		returnToMainPresOrExit();
		break;
	case 2:
		system("cls");
		mp.inputMedicalPrescription();
		mp.inputMedicalPrescriptionToFile();
		returnToMainPresOrExit();
		break;
	case 3:
		system("cls");
		mp.inputMedicalPrescription();
		mp.inputMedicalPrescriptionToFile();
		returnToMainPresOrExit();
		break;
	case 4:
		system("cls");
		mp.deteteMedicalPrescriptionData();
		returnToMainPresOrExit();
		break;
	case 5:
		system("cls");
		mainMenu();
		break;
	default:
		system("cls");
		cout << "Nhap lua chon khong hop le, vui long chon lai" << endl;
		patientMenu();
	}
}