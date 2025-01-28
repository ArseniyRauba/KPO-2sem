#pragma once
#include <iostream>
using namespace std;
namespace Call {
	int _cdecl funcA(int num1, int num2, int num3) {
		int sum = num1 + num2 + num3;
		cout << "Amount of 3 numbers: " << sum << endl;
		return sum;
	}
	int _stdcall funcB(int &num1, int num2, int num3) {
		int comp = num1 * num2 * num3;
		cout << "Composition of 3 numbers: " << comp << endl;
		return comp;
	}
	int _fastcall funcC(int num1, int num2, int num3, int num4) {
		int sum2 = num1 + num2 + num3 + num4;
		cout << "Amount of 4 numbers: " << sum2 << endl;
		return sum2;
	}
}