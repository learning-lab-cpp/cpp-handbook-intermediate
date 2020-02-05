#include <iostream>
#include "MyClass.h"

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::setValue(int value)
{
    this -> value = value;
}

void print(MyClass mc)
{
    std::cout << mc.value << '\n';
}