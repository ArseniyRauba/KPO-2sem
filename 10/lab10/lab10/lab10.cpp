#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "число: " << target1 << " количество: " << num_items1 << '\n';

	//лямбда-выражение для подсчета элементов %3=0
	int  num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "кол-во элементов, кратных 3: " << num_items3 << '\n';

	cout << endl << "лямбда, захват переменных" << endl;
	//лямбда-выражение, захват переменных
	for (auto i : v) [i]() {
		if (i % 3 == 0) 
			cout << i << " "; 
	}();

	cout << endl << " Лямбда с параметрами" << endl;
	//вывод значений кратных 3. Значение передаем как параметр у обычн ф-ции
	for (auto i : v)[](auto i) {
		if (i % 3 == 0) cout << i << " "; 
	}(i);

	cout << endl << " Лямбда без параметров" << endl;
	//вывод значений кратных 3
	//значение передаются через захват переменных при этом пропустим скобки для добавления параметров
	for (auto i : v)[i] {
		if (i % 3 == 0) cout << i << " "; 
	}();

	auto n = [](string str1, string str2) {return str1 + str2; }("Hello", ", World!");
}