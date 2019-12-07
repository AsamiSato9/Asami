#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int zone,ex;
    float x,y;
    cin >> x >> y >> ex;

    if (ex == 1)
    {
        if (y <= 1) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 2)
    {
        if (y <= -x) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 3)
    {
        if (x*x+y*y <= 1) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }
    if (ex == 4)
    {
        if (pow(x-1, 2)+y*y <= 1) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    return 0;
}
