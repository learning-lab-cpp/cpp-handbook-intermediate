#include <iostream>
#include "passByRef.h"

using namespace std;

void passByRef(int &num1)
{
    cout << "In passByRef()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1 which will now change num
    num1++;

    cout << "num1 is now " << num1 << endl;
}