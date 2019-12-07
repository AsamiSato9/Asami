#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    cin >> age;

    if (age>100||age<0) cout << "Fail" << endl;

    else {

        if (age == 100) {
            cout << "Сто" << endl;
            return 0;
        }
        if (age % 100 > 10 && age%100 < 20){
            if (age%100 == 11) cout << "Одинадцать" << endl;
            if (age%100 == 12) cout << "Двенадцать" << endl;
            if (age%100 == 13) cout << "Тринадцать" << endl;
            if (age%100 == 14) cout << "Четырнадцать" << endl;
            if (age%100 == 15) cout << "Пятнадцать" << endl;
            if (age%100 == 16) cout << "Шеснадцать" << endl;
            if (age%100 == 17) cout << "Семнадцать" << endl;
            if (age%100 == 18) cout << "Восемнадцать" << endl;
            if (age%100 == 19) cout << "Девятнадцать" << endl;
            return 0;
        }

        int des = age / 10;
        int ed = age % 10;


        if (des == 1) cout << "Десять";
        if (des == 2) cout << "Двадцать";
        if (des == 3) cout << "Тридцать";
        if (des == 4) cout << "Сорок";
        if (des == 5) cout << "Пятдесят";
        if (des == 6) cout << "Шесдесят";
        if (des == 7) cout << "Семдесят";
        if (des == 8) cout << "Восемдесят";
        if (des == 9) cout << "Девяносто";



        if (ed == 1) cout << " один" << endl;
        if (ed == 2) cout << " два" << endl;
        if (ed == 3) cout << " три" << endl;
        if (ed == 4) cout << " четыре" << endl;
        if (ed == 5) cout << " пять" << endl;
        if (ed == 6) cout << " шесть" << endl;
        if (ed == 7) cout << " семь" << endl;
        if (ed == 8) cout << " восемь" << endl;
        if (ed == 9) cout << " девять" << endl;
    }

    return 0;
}
