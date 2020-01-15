#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person *pOne = new Person{"Tom", "Thumb", 25};

    cout << "First name of pOne: " << pOne -> getFirstName() << '\n';
    cout << "Last name of pOne: " << pOne -> getLastName() << '\n';
    cout << "Age of pOne: " << pOne -> getAge() << '\n';

    cout << "Memory address of pOne pointer: " << &pOne << '\n';
    cout << "Memory address of object (value of pOne): " << pOne << " - starting address" << '\n';
    cout << "Size of pOne pointer: " << sizeof(pOne) << '\n';
    cout << "Size of pOne object: " << sizeof(*pOne) << '\n';
    pOne++;
    cout << "Memory address of object (value of pOne): " << pOne << " - ending address" << '\n';

    delete pOne;
    
    return 0;
}

// Output:
// First name of pOne: Tom
// Last name of pOne: Thumb
// Age of pOne: 25
// Memory address of pOne pointer: 0x28feb4
// Memory address of object (value of pOne): 0x531d60 - starting address
// Size of pOne pointer: 4
// Size of pOne object: 52
// Memory address of object (value of pOne): 0x531d94 - ending address
// Person destructor called

