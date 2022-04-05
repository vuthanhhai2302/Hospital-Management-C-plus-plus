#pragma once
#include"Header.h"

class Person
{
protected:
	string _persName;
	string _sex;
	int _age;

public:
	Person()
	{
		this->_persName = "";
		this->_sex = "";
		this->_age = 0;
	}
	~Person()
	{
		this->_persName = "";
		this->_sex = "";
		this->_age = 0;
	}
public:
	void input();
	void output();
};

