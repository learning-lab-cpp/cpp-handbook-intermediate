#pragma once

class MyClass
{
private:
    int value;

public:
    MyClass();
    ~MyClass();

    void setValue(int);
    friend void print(MyClass);
};