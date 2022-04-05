#include"Header.h"

#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"
#include"MedicalPrescription.h"


/*
+Login DONE
+ Xem / Thêm / Xóa thông tin Nhân viên bệnh viện. Done
+ Xem / Thêm / Xóa Thông tin bệnh nhân. Done
+ Xem / Thêm / Xóa Thông tin bệnh án của bệnh nhân. Done
+ Xuất ra file thông tin bệnh nhân / bệnh án/ Nhân viên bệnh viện  . Done / Done / done
+ Xem / Thêm / Xóa thông tin thuốc.Done
+ Xuất ra file thông tin đơn thuốc. done
 4 x 2 = 8 x 3 = 24 Menu


 tất cả các chức năng em đều lưu thông tin dưới dạng file.


*/




int main()
{
	UserLogin ul;
	Patient p1;
	HospitalEmployee e1;
	Medicine m1;
	MedicalRecord md1;
	MedicalPrescription mp1;

	int choice;
	int choiceMain;
	cout << "Welcome to 1712412 Hospital Management Project" << endl;
	cout << "1.Register      2.Login" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		system("cls");
		ul.Register();
		system("cls");
		cout << "Register user successfull, now you can login!" << endl;
		ul.LoginMenu();
	}
	else if (choice == 2)
	{
		ul.Login();
		
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		ul.LoginMenu();
	}
	system("cls");
	mainMenu();


	//mp1.inputMedicalPrescription();
	//mp1.outputMedicalPrescription();
	//mp1.inputMedicalPrescriptionToFile();
	//mp1.readMedicalPrescriptionFromFile();
	//mp1.deteteMedicalPrescriptionData();


	//md1.inputMedicalRecord();
	//md1.outputMedicalRecord();
	//md1.inputMedicalRecordToFile();
	//md1.readMedicalRecordFromFile();
	//ul.LoginMenu();

	//person pers;
	//pers.input();
	//pers.output();
	
	//m1.inputMedicine();
	//m1.inputMedicineToFile();
	//m1.readMedicineFromFile();
	//m1.deteteMedicineData();

	//p1.inputPatient();
	//p2.inputPatient();
	//p1.inputPatientToFile();
	//p1.readPersonFromFile();
	//p1.detetePatientData();

	//e1.inputEmployee();
	//e1.inputEmployeeToFile();
	//e1.readEmployeeFromFile();
	//e1.deteteEmployeeData(); 
	//e1.readEmployeeFromFile();

	//p1.outputPatient();
	//p2.outputPatient();


	system("pause");
}
