#include "math.h"
#include <iostream>

MyMath::math::math()
{}

MyMath::math::~math()
{}

int MyMath::math::pow(int base, int exp)
{
    int result {1};
    if (exp > 0)
    {
        for(int i = 0; i < exp; i++)
        {
            result = result * base;
        }
    }
    else
    {
        std::cout << "Enter only positive numbers for exponent";
        return result = 0;
    }
    return result;
}