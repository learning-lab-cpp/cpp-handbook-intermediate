#include <iostream>
#include "Student.h"

int main()
{
    Student s;
    s.setAge(18);
    std::cout << s.getAge() << '\n';

    return 0;
}