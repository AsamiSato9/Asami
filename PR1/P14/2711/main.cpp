#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
    txCreateWindow (400,300);
    txSetColour (TX_RED, 5);
    txLine (10, 10, 40,40  );
    txSetColour (TX_RED, 5);
    txLine (10, 40, 40, 10 );
    txSetColour (TX_RED, 5);
    txLine (80,40 , 120, 80 );
    return 0;
}
