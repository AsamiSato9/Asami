#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout <<"KAKOI VOZRAST?"<< endl;
    cin >>a;
    if (a>120||a<0)
        {cout<<"FAIL"<<endl;}
    else
    if (a%10==0 or a%10>=5 or a%100 >= 11 and a%100 <= 19)
        {cout<<a<<" "<<"let"<< endl;}
    else
    if (a%10>=5/*a%11==0||a%12==0||a%13==0||a%14==0||a%15==0||a%16==0||a%17==0||a%18==0||a%19==0*/)
        {cout<<a<<" "<<"let"<<endl;}
    else
    if (a%10==1)
        {cout<<a<<" "<<"god"<<endl;}
    else
    if (a%10==2||a%10==3||a%10==4)
        {cout<<a<<" "<<"goda"<< endl;}
    return 0;
}
