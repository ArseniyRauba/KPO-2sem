#include <iostream>
#include "stdafx.h"
using namespace std;

int GetNumberOfDaysToBirthday(int day, int month, int year, int count, int ResultDay) {

	int birthday, bday, bmonth;

	cout << "Введите дату рождения в формате ДДММГГГГ" << endl;
	cin >> birthday;
	
	bday = birthday / 1000000;
	bmonth = birthday / 10000 % 100;

	int DaysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		DaysInMonth[1] = 29;
		count = 1;
	}

	if (count == 1) {
		year = 366;
	}
	else year = 365;

	int numberofBday = bday;

	for (int i = 0; i < bmonth - 1; i++) {
		numberofBday += DaysInMonth[i];
	}

	if (numberofBday > ResultDay) {
		cout << "Дней до дня рождения: " << numberofBday - ResultDay << endl;
	}
	else cout << "Дней до дня рождения: " << (year - ResultDay) + numberofBday << endl;

	return numberofBday;
}