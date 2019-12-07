#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
    txCreateWindow (1024, 800);
    int a;
    a=300;
    while(1) {
        txSetColour (TX_RED,90);
        txLine (100,100,100,100);
        Sleep(a);
        txSetColour (TX_BLACK,90);
        txLine (100,100,100,100);
        Sleep(a);
        txSetColour (TX_YELLOW,90);
        txLine (100,200,100,200);
        Sleep(a);
        txSetColour (TX_BLACK,90);
        txLine (100,200,100,200);
        Sleep(a);
        txSetColour (TX_GREEN,90);
        txLine (100,300,100,300);
        Sleep(a);
        txSetColour (TX_BLACK,90);
        txLine (100,300,100,300);
    }
    return 0;
}
