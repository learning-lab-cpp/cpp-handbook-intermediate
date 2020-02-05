#include <iostream>
#include "Handle.h"

Handle::Handle() : body{ new Body }
{
}

Handle::~Handle()
{
    delete body;
    std::cout << "Destructor of Handle class." << '\n';
}

void Handle::someOperationOnBody(int data)
{
    body -> someData = data;
    std::cout << data << " is written." << '\n';
}