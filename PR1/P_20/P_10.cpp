#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool isNegativ;
    cin >> a >> b >> c;
    if (a<0||b<0||c<0) {
        isNegativ = 1;
        cout << "True" << endl;}
    else {
        isNegativ = 0;
        cout << "false" << endl;
    }
    return 0;
}
