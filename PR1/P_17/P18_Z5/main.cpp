#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,b,c;
    cout<<"введите переменные"<< endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"это переменна€ A(вводилась первой)"<<a<< endl;
    cout<<"это переменна€ B(¬водилась второй)"<<b<< endl;
    return 0;
}
