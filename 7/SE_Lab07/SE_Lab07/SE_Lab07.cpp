#include <iostream>
#include "Call.h"
using namespace std;
using namespace Call;

int main() {
	int num1, num2, num3, num4;
	cout << "Enter a 4 numbers: " << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	funcA(num1, num2,num3);
	funcB(num1,num2, num3);
	funcC(num1, num2, num3, num4);
}