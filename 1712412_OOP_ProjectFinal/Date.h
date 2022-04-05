#pragma once
#include"Header.h"

class Date
{
protected:
	string _day;
	string _month;
	string _year;

public:
	Date()
	{
		this->_day = "";
		this->_month = "";
		this->_year = "";
	}
	~Date()
	{
		this->_day = "";
		this->_month = "";
		this->_year = "";
	}
public:
	string inputDate();
	void outputDate();
};

