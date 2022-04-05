#pragma once
#include"Header.h"


class UserLogin
{
private:		// Attribute
	string _username;
	string _password;
public:
	bool IsLoggedIn();
	void LoginMenu();
	void Register();
	void Login();
public:
	string getUsername() { return _username; }
	void setUsername(string value) { _username = value; }
	string getPassword() { return _password; }
	void setPassword(string value) { _password = value; }

};




