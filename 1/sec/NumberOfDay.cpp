#include <iostream>
#include "stdafx.h"
using namespace std;

int GetNumberOfDay(int day, int month, int year) {

	int DaysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		DaysInMonth[1] = 29;
	}

	int ResultDay = day;

	for (int i = 0; i < month - 1; i++) {
		ResultDay += DaysInMonth[i];
	}

	return ResultDay;
}