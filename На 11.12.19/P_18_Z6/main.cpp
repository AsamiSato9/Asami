#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b;
    cout <<"������� ����������" << endl;
    cin >> a >> b;
    b=a+b;
    a=b-a;
    b=b-a;
    cout << a <<"  "<< b << endl;
    return 0;
}
