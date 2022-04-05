
#include"UserLogin.h"
#include"Person.h"
#include"Patient.h"
#include"HospitalEmployee.h"
#include "Medicine.h"
#include"Date.h"
#include"MedicalRecord.h"

bool UserLogin::IsLoggedIn()
{
	string username, password, un, pw;

	cout << "Enter Username: ";
	cin >> username;
	cout << "Enter Password: ";
	cin >> password;

	ifstream read("C:\dataUser" + username + ".txt", ios::in);
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UserLogin::Register()
{
	string username;
	string password;
	cout << "Select a username: ";
	cin >> username;
	//setUsername(username);
	cout << "Select a password: ";
	cin >> password;
	//setPassword(password);

	ofstream file;
	file.open("C:\dataUser" + username + ".txt", ios::out | ios::trunc);
	file << username << endl << password;
	file.close();
	
	cout << "Register Sucessfully!" << endl;
	system("pause");
}

void UserLogin::Login()
{
	system("cls");
	bool loginStatus = IsLoggedIn();
	if (loginStatus == false)
	{
		system("cls");

		cout << "Login Failed" << endl;
		cout << "Please try again!" << endl;
		system("pause");
		Login();
	}
	else
	{
		system("cls");

		cout << "Login successful!" << endl;
		cout << "Now you can use the program!" << endl;
		system("pause");


	}

}

void UserLogin::LoginMenu()
{
	int choice;
	system("cls");
	cout << "Welcome to 1712412 Hospital Management Project" << endl;
	cout << "1.Register      2.Login" << endl;
	cout << "Your choice:";
	cin >> choice;
	if (choice == 1)
	{
		Register();

		LoginMenu();
	}
	else if (choice == 2)
	{
		system("cls");
		Login();
	}
	else
	{
		cout << "Chon sai, vui long chon lai!" << endl;
		LoginMenu();
	}
}

