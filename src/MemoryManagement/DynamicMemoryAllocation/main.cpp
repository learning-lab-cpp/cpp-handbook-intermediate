#include <iostream>

using namespace std;

int main()
{
    int *pInt = new int;
    double *pDouble = new double;

    *pInt = 3;
    *pDouble = 5.0;

    cout << *pInt << " Starting address: " << pInt;
    pInt++;
    cout << " Ending address: " << pInt << '\n';
    cout << "Size of int pointer: " << sizeof(pInt) << " Size of int value: " << sizeof(*pInt) << '\n';

    cout << *pDouble << " Starting address: " << pDouble;
    pDouble++;
    cout << " Ending address: " << pDouble << '\n';
    cout << "Size of double pointer: " << sizeof(pDouble) << " Size of double value: " << sizeof(*pDouble);

    delete pInt;
    delete pDouble;
}
// Output:
// 3 Starting address: 0x5b1d60 Ending address: 0x5b1d64
// Size of int pointer: 4 Size of int value: 4
// 5 Starting address: 0x5b1d70 Ending address: 0x5b1d78
// Size of double pointer: 4 Size of double value: 8