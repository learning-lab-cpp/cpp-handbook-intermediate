#include <iostream>
#include "passByRef.h"

using namespace std;

int main()
{
    int num = 3;
    cout << "In main()" << endl;
    cout << "Value of num is " << num << endl; // 3

    passByRef(num);
/*
    void passByRef(int num1)
{
    cout << "In passByRef()" << endl;
    cout << "Value of num1 is " << num1 << endl; // 3

    // modify num1 which will now change num
    num1++;

    cout << "num1 is now " << num1 << endl;      // 4
}
*/

    cout << "Back in main and the value of num is  " << num << endl; // 4

    return 0;
}