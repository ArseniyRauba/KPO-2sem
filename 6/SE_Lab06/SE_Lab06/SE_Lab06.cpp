#include <iostream>
#include <Windows.h>
#include "D:\����\���\6\SE_Lab06\SE_Lab06L\Dictionary.h"
#pragma comment (lib,"D:/����/���/6/SE_Lab06/x64/Debug/SE_Lab06L.lib")
using namespace std;
using namespace Dictionary;

int main() {
    setlocale(LC_ALL, "rus");
    try {
        Instance d1 = Create("��������", 7), d2 = Create("�������������", 7);
        Entry d1e1 = { 1,"�������" }, d1e2 = { 2,"�����" }, d1e3 = { 3,"�����������" }, d1e4 = { 4,"��������" }, d1e5 = { 5,"���������" }, d1e6 = { 6,"��������" }, d1e7 = { 7,"�������������" };
        Entry d2e1 = { 1,"�������" }, d2e2 = { 2,"��������" }, d2e3 = { 3,"�����" }, d2e4 = { 4,"���������" }, d2e5 = { 5,"�������" }, d2e6 = { 6,"����������" }, d2e7 = { 7,"����������" };

        AddEntry(d1, d1e1);
        AddEntry(d1, d1e2);
        AddEntry(d1, d1e3);
        AddEntry(d1, d1e4);
        AddEntry(d1, d1e5);
        AddEntry(d1, d1e6);
        AddEntry(d1, d1e7);

        AddEntry(d2, d2e1);
        AddEntry(d2, d2e2);
        AddEntry(d2, d2e3);
        AddEntry(d2, d2e4);
        AddEntry(d2, d2e5);
        AddEntry(d2, d2e6);
        AddEntry(d2, d2e7);

        Print(d1);
        Print(d2);
    }
    catch (char* e){
        cout << e << endl;
    }
    return 0;
}