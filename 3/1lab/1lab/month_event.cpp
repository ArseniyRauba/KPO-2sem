#include <iostream>	
#include "stdafx.h"
using namespace std;

void GetNameOfMonth(int month) {

	setlocale(LC_ALL, "rus");

	const char* Month[13] = { "", "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };
	cout << Month[month] << endl;
}

void GetEvent(int count) {

	setlocale(LC_ALL, "rus");

	int dayOfEvent;
	cout << "������� ��������� ����� ���: ";
	cin >> dayOfEvent;

	if (count == 0 && dayOfEvent == 366) {
		cout << "� ��!";
	}

	if (count == 1 && dayOfEvent == 365) {
		cout << "� ��!";
	}

	if (dayOfEvent == 256) {
		cout << "� ���� ������������!";
	}

	if (count == 1 && dayOfEvent == 5) {
		cout << "� ���� �������� � �������!";
	}

	if (count == 0 && dayOfEvent == 3) {
		cout << "� ���� �������� � �������!";
	}

	if (count == 1 && dayOfEvent == 175) {
		cout << "� ���� �������!";
	}

	if (count == 0 && dayOfEvent == 173) {
		cout << "� ���� �������!";
	}
}