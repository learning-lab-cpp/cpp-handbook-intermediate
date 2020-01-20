#include <iostream>
#include "Math.h"

int main()
{
    Math * m = new Math();
    int res = m -> pow(2, 3);
    
    std::cout << res;

    return 0;
}