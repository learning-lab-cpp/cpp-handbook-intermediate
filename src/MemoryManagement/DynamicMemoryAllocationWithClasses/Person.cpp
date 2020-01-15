#include <iostream>
#include "Person.h"

Person::Person()
    : firstName{}, lastName{}, age{}
{}

Person::Person(std::string initial_firstName, std::string initial_lastName)
    : firstName{initial_firstName}, lastName(initial_lastName), age{}
{}

Person::Person(std::string initial_firstName, std::string initial_lastName, int initial_age)
    : firstName{initial_firstName}, lastName(initial_lastName), age{initial_age}
{}

Person::~Person()
{
    std::cout << "Person destructor called" << '\n';
}

void Person::setFirstName(std::string initial_firstName)
{
    this -> firstName = initial_firstName;
}

void Person::setLastName(std::string initial_lastName)
{
    this -> lastName = initial_lastName;
}

void Person::setAge(int initial_age)
{
    this -> age = initial_age;
}

std::string Person::getFirstName()
{
    return this -> firstName;
}

std::string Person::getLastName()
{
    return this -> lastName;
}

int Person::getAge()
{
    return this -> age;
}