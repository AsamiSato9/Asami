#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a;
    if (a>9999||a<1000) cout << "Nope"<< endl;
    else
    b=a%100;
    c=(a-b)/100;
    c=(c%10)*10+(c-b%10)/10;
    if (b==c) cout<<"YES"<<endl;
    else cout << "NO" << endl;
    return 0;
}
