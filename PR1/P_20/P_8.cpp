#include <iostream>

using namespace std;

int main()
{
    int a,half1,half2;
    cin >> a;
    if (a>9999||a<1000) {cout << "fail" << endl;}
    else {
    half1 = a%100;
    half2 = (a-half1)/100;
    half2 = (half2%10)*10 + (half2-half2%10)/10;
    if (half1==half2) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}
