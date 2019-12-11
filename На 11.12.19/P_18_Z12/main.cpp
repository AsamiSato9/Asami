#include <iostream>
using namespace std;
int main()
{
     setlocale(LC_ALL,"Russian");
     int des,i,dv,d,massiv[50];
        cout <<"Введите необходимую систему счисления"<< endl;
        cin >> i;
        d = 0;
        cout << "Введите число в 10-чной системе "<< endl;
        cin >> des;
       while(des>1)
       {
         dv = des % i ;
         massiv[d] = dv;
         des /= i;
         d++;
       }
       d--;
       cout << "Получено число: ";
       cout << 1;
    while(d>=0)
    {
        cout << massiv[d];
        d--;
    }
    return 0;
}
