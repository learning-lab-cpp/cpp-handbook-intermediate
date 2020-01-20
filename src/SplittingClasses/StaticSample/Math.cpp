#include "Math.h"

int Math::pow(int base, int exp)
{
    int res = 1;
    for(int i = 0; i < exp; i++)
    {
        res = res * base;
    }
    return res;
}