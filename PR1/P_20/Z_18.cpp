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
            cout << "���" << endl;
            return 0;
        }
        if (age % 100 > 10 && age%100 < 20){
            if (age%100 == 11) cout << "����������" << endl;
            if (age%100 == 12) cout << "����������" << endl;
            if (age%100 == 13) cout << "����������" << endl;
            if (age%100 == 14) cout << "������������" << endl;
            if (age%100 == 15) cout << "����������" << endl;
            if (age%100 == 16) cout << "����������" << endl;
            if (age%100 == 17) cout << "����������" << endl;
            if (age%100 == 18) cout << "������������" << endl;
            if (age%100 == 19) cout << "������������" << endl;
            return 0;
        }

        int des = age / 10;
        int ed = age % 10;


        if (des == 1) cout << "������";
        if (des == 2) cout << "��������";
        if (des == 3) cout << "��������";
        if (des == 4) cout << "�����";
        if (des == 5) cout << "��������";
        if (des == 6) cout << "��������";
        if (des == 7) cout << "��������";
        if (des == 8) cout << "����������";
        if (des == 9) cout << "���������";



        if (ed == 1) cout << " ����" << endl;
        if (ed == 2) cout << " ���" << endl;
        if (ed == 3) cout << " ���" << endl;
        if (ed == 4) cout << " ������" << endl;
        if (ed == 5) cout << " ����" << endl;
        if (ed == 6) cout << " �����" << endl;
        if (ed == 7) cout << " ����" << endl;
        if (ed == 8) cout << " ������" << endl;
        if (ed == 9) cout << " ������" << endl;
    }

    return 0;
}
