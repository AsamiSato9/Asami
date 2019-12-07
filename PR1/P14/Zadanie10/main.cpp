#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    bool OTRIC;
    if (a<0||b<0||c<0) {
        OTRIC = 1;
        cout<<"true"<< endl;}
        else{
        OTRIC = 0;
        cout <<"false"<< endl;}
    return 0;
}
