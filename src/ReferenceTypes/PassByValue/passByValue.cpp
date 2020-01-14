#include <iostream>
#include "passByValue.h"

using namespace std;

void passByValue(int num1)
{
    cout << "In passByValue()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1, won't impact num
    num1++;

    cout << "num1 is now " << num1 << endl;
}