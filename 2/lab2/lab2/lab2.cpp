#include <iostream>
using namespace std;

void function() {

}

int main() {

	//n = 9
	// X = 9 + 9, Y = 10 + 9, Z = 11 + 9;
	// S = 1.0 + 9;
	
	//zadanie 4
	bool t = true, f = false;

	//zadanie 5
	char letter5 = 'a';

	//zadanie 6
	char letter6 = 'а';

	//zadanie 7
	wchar_t letter7 = L'r';

	//zadanie 8
	wchar_t letter8 = L'р';

	//zadanie 9
	short X = 9 + 9, negativeX = -X;

	//zadanie 10
	short numMax = 0x7fff;
	short numMin = 0x8000;

	//zadanie 11
	unsigned short numMax2 = 0xffff;
	unsigned short numMin2 = 0x0000;

	//zadanie 12
	int Y = 10 + 9;
	int negativY = -Y;

	//zadanie 13
	int maxNumInt = 0x7FFFFFFF;
	int minNumInt = 0x80000000;

	//zadanie 14
	unsigned int maxNumUnsInt = 0xFFFFFFFF;
	unsigned int minNumUnsInt = 0x00000000;

	//zadanie 15
	long Z = 11 + 9;
	long negativZ = -Z;

	//zadanie 16
	long maxNumLong = 0x7FFFFFFF;
	long minNumLong = 0x80000000;

	//zadanie 17
	unsigned long maxNumUnsLong = 0xFFFFFFFF;
	unsigned long minNumUnsLong = 0x00000000;

	//zadanie 18
	float S = 1.0 + 9;
	float negativS = -S;

	//zadanie 19
	float infinity = S / 0.0;
	float negativInfinity = S / 0.0;
	float nan = sqrt(-2.0);

	//zadanie 20
	char* first; 
	first = &letter5 + 3;

	wchar_t* second; 
	second = &letter7 + 3;

	short* third; 
	third = &numMax + 3;

	int* fourth; 
	fourth = &Y;

	float* fifth;
	fifth = (float*)&maxNumInt + 3;

	//zadanie 21
	void(*pointer)();
	pointer = function;
	pointer();

	return 0;
}