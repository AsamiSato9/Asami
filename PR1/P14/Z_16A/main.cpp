#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    bool idTF;
    if (a%10==1||b%10==1||c%10==1){
        idTF=true;
        cout<<idTF<< endl;}
        else {
        idTF=false;
        cout<<idTF<< endl;}
    return 0;
}
