#include <iostream>

int main()
{
    int num {1};
    int *pNum {&num};

    std::cout << pNum << '\n'; // 0x28ff28
    std::cout << *pNum << '\n'; // 1

    *pNum = 2;
    std::cout << num << '\n'; // 2
    std::cout << *pNum << '\n'; // 2 

    return 0;
}