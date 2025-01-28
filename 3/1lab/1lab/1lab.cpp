#include <iostream>	
#include "stdafx.h"
using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	int day, month, year, date, leapyear, numberofday,numberofBday, count = 0, ResultDay;

	cout << "Введите дату в формате ДДММГГГГ" << endl;
	cin >> date;
	day = date / 1000000;
	month = date / 10000 % 100;
	year = date % 10000;

	GetLeapYear((int)year);
	GetNameOfMonth((int) month);
	ResultDay=GetNumberOfDay((int)day, month, year);
	cout << "Номер дня в году: " << ResultDay << endl;
	GetNumberOfDaysToBirthday((int) day, month, year, count, ResultDay);
	GetEvent((int) count);
}