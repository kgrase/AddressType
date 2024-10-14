#include "personType.h"
#include <iostream>

using std::cout; using std::endl;

personType::personType():firstName{""}, lastName{""}
{
    // a person with empty names has been created
}

personType::personType(string nameFirst, string nameLast):firstName{nameFirst}, lastName{nameLast}
{
    // a person with specified names can been created: personType some_person("John", "Smith");
}

void personType::setFirstName(string nameFirst)
{
    firstName = nameFirst;
}

void personType::setLastName(string nameLast)
{
    lastName = nameLast;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

void personType::print() const
{
    cout << firstName << " " << lastName << endl;}