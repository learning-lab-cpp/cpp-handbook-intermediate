#include <iostream>
#include "passByValue.h"

using namespace std;

int main()
{
    int num = 3;
    cout << "In main()" << endl;
    cout << "Value of num is " << num << endl; // 3

    passByValue(num);
/*
    void passByValue(int num1)
{
    cout << "In passByValue()" << endl;
    cout << "Value of num1 is " << num1 << endl; // 3

    // modify num1, won't impact num
    num1++;

    cout << "num1 is now " << num1 << endl;      // 4
}
*/

    cout << "Back in main and the value of num is  " << num << endl; // 3

    return 0;
}