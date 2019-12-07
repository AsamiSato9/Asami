#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,b;
    int c=rand();
    cin >> a >> b;
    c=c%(b-a)+a;
    cout << c << endl;
    return 0;
}
