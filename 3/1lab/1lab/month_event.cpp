#include <iostream>	
#include "stdafx.h"
using namespace std;

void GetNameOfMonth(int month) {

	setlocale(LC_ALL, "rus");

	const char* Month[13] = { "", "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
	cout << Month[month] << endl;
}

void GetEvent(int count) {

	setlocale(LC_ALL, "rus");

	int dayOfEvent;
	cout << "Введите порядовый номер дня: ";
	cin >> dayOfEvent;

	if (count == 0 && dayOfEvent == 366) {
		cout << "С нг!";
	}

	if (count == 1 && dayOfEvent == 365) {
		cout << "С нг!";
	}

	if (dayOfEvent == 256) {
		cout << "С днем программиста!";
	}

	if (count == 1 && dayOfEvent == 5) {
		cout << "С днем прогулок с собакой!";
	}

	if (count == 0 && dayOfEvent == 3) {
		cout << "С днем прогулок с собакой!";
	}

	if (count == 1 && dayOfEvent == 175) {
		cout << "С днем окрошки!";
	}

	if (count == 0 && dayOfEvent == 173) {
		cout << "С днем окрошки!";
	}
}