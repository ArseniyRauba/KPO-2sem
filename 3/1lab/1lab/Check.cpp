#include <iostream>	
#include "stdafx.h"
using namespace std;

void GetCheckDate(int day, int month, int year, int bday, int bmonth, int date, int birthday) {

	if (day > 31 || month > 12 || date < 10000000) {
		cout << "Неверная дата";
	}
}

void GetCheckBday(int bday, int bmonth, int birthday){

	if (bday > 31 || bmonth > 12 || birthday < 10000000) {
		cout << "Неверная дата";
	}
}