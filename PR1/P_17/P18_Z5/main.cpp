#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,b,c;
    cout<<"������� ����������"<< endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"��� ���������� A(��������� ������)"<<a<< endl;
    cout<<"��� ���������� B(��������� ������)"<<b<< endl;
    return 0;
}
