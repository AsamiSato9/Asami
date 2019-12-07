#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int TW=rand();
    int a,b,c;
    a=0;
    b=0;
    c=0;
    TW=TW%1000;
    a=TW-(TW%100)/100;
    b=(TW-(TW%10)-a*100)/10;
    c=TW-a*100-b*10;
    cout << a << ',' <<b<< ',' <<c<< endl;
    return 0;
}
