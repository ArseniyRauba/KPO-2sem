#include <iostream>
#include "stdafx.h"
using namespace std;

void GetLeapYear(int year) {

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " - " << "���������� ���" << endl;
	}
	else cout << "�� ���������� ���" << endl;

}