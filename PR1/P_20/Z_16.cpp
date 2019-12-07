#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool isOne,isA;
    cin >> a >> b >> c >> isA;
    if (isA==1) {
        if (a%10==1||b%10==1||c%10==1) {
            isOne = 1;
            cout << "True" << endl;
        }
        else {
            isOne = 0;
            cout << "False" << endl;
        }
    }
    else {
        if (a%10==1&&b%10==1&&c%10==1) {
            isOne = 1;
            cout << "True" << endl;
        }
        else {
            isOne = 0;
            cout << "False" << endl;
        }
    }
    return 0;
}
