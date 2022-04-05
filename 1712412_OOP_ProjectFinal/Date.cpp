#include "Date.h"


string Date::inputDate()
{
	//cout << "Nhap ngay tao: ";
	cout << "Ngay: ";
	cin >>_day;
	cout << "Thang: ";
	cin >>_month;
	cout << "Nam: ";
	cin >> _year;

	string dateInputed = "Ngay: " + _day + "Thang: " + _month + "Nam:" + _year;
	return dateInputed;
}

void Date::outputDate()
{
	cout << this->_day << "/" << this->_month << "/" << this->_year;
}