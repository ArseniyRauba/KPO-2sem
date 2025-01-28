//#include <iostream>
//#include <tchar.h>
//using namespace std;
//
//typedef unsigned char day;
//typedef unsigned char month;
//typedef unsigned short year;
//
//struct Date
//{
//    day dd;
//    month mm;
//    year yyyy;
//};
//
//int main(int argc, _TCHAR* argv[])
//{
//    setlocale(LC_ALL, "ru");
//
//    Date date1 = { 7,1,1980 };
//    Date date2 = { 7,1,1993 };
//    Date date3 = { 7,1,1980 };
//
//    if (date1.dd < date2.dd && date1.mm < date2.mm && date1.yyyy < date2.yyyy || date1.dd == date2.dd && date1.mm == date2.mm && date1.yyyy < date2.yyyy) {
//        cout << "истина" << endl;
//    }
//    else cout << "ложь" << endl;
//
//    if (date1.dd > date2.dd && date1.mm > date2.mm && date1.yyyy > date2.yyyy) {
//        cout << "истина" << endl;
//    }
//    else cout << "ложь" << endl;
//
//    if (date1.dd == date2.dd && date1.mm == date2.mm && date1.yyyy == date2.yyyy) {
//        cout << "истина" << endl;
//    }
//    else cout << "ложь" << endl;
//
//    if (date1.dd == date3.dd && date1.mm == date3.mm && date1.yyyy == date3.yyyy) {
//        cout << "истина" << endl;
//    }
//    else cout << "ложь" << endl;
//}



#include <iostream>
#include <string>
using namespace std;

struct History_of_operation
{
    string number_of_account, owner, operation;
    int amount;
    string currency, date;
    bool presence[100];
};

void main()
{
    History_of_operation operation1 = { "account: 893746AABB87987", "Arseniy", "refill",300,"BYN","25.03.2024" };
    History_of_operation operation2 = { "account: 893746AABB87657", "Artem", "transfer",400,"BYN","13.08.2024" };

    bool flag = false;

    if (operation1.number_of_account == operation2.number_of_account && operation1.owner == operation2.owner && operation1.operation == operation2.operation && operation1.amount == operation2.amount && operation1.currency == operation2.currency && operation1.date == operation2.date && flag == true) {
        cout << "Yes, all right!" << endl;
    }
    else cout << "I'm so sorry..." << endl;

    cout << "Summary ammount = " << operation1.amount + operation2.amount << "BYN" << endl;
}