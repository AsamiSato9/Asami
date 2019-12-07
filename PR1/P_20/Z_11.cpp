#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    bool isTwo;
    cin >> a >> b >> c;
    if (a>9&&a<99&&b>9&&b<99&&c>9&&c<99) {
            isTwo = 1;
            cout << "True" << endl;}
    else {
            isTwo = 0;
            cout << "False" << endl;
    }
    return 0;
}
