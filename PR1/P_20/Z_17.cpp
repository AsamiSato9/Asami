#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    cin >> age;

    if (age>120||age<0) cout << "Fail" << endl;

    else {

        if (age%10 == 1&&age%100 != 11) cout << age << " Год";
        if (age%10 >= 2&&age%10 <= 4&&age%100 != 12&&age%100 != 13&&age%100 != 14) cout << age << " Года";
        if (age%10 >= 5&&age%10 <= 9||age%100 >= 10&&age%100 <= 20||age%100 == 30||age%100 == 40||age%100 == 50||age%100 == 60
            ||age%100 == 70||age%100 == 80||age%100 == 90||age == 100) cout << age << " Лет";
    }

    return 0;
}
