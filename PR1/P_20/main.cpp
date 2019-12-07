#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int ex;
    float x,y;
    cin >> x >> y >> ex;

    if (ex == 1)
    {
        if (y <= x && x*x+y*y > 4 && x<4 && y >= 0) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 2)
    {
        if (y <= sin(x) && y <=0.5 && y > 0 && x >= 0 && x <= M_PI) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 3)
    {
        if (y <= 2 - x*x && (y >= x || (y <= x && y >= 0))) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 4)
    {
        if (y >= x*x - 2 && (y <= x || y <= -x)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 5)
    {
        if (x*x + y*y <= 1 && (y >= x || x <= 0)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 6)
    {
        if (x*x + y*y <= 1 && (y >= -x || y <= x)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 7)
    {
        if (x <= 0 && y >= 1 - x && (x >= 0 || y >= 2*x*x)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 8)
    {
        if (y <= 1 && x >= 0 && (y*y + x*x <=1 || y >= x - 1)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }

    if (ex == 9)
    {
        if (x*x + y*y <=1 || (x <= 1 && y <= 1 && x >= 0 && y >= 0)) cout << "Да" << endl;
        else cout << "Нет" << endl;
        return 0;
    }


    return 0;
}
