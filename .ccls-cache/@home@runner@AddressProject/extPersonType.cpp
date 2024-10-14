#include "extPersonType.h"
#include "dateType.h"
#include "addressType.h"

#include <iostream>

using std::cout; using std::endl;

extPersonType::extPersonType(): personType(), birthdate(), address(), phoneNumber{""}, relationship{""}
{
    // personType();
}

extPersonType::extPersonType(string nameF, string nameL, int birthMonth, int birthDay, int birthYear, string street, string city, string state, int zip, string phone, string status) :
personType(nameF, nameL), birthdate(birthMonth, birthDay, birthYear),  address(street, city, state, zip), phoneNumber{phone}
{
    setRelationship(status);
}

void extPersonType::setPhoneNumber(string phone)
{
    phoneNumber = phone;  // no validation happens to see if the phone number is of acceptable format
}

void extPersonType::setRelationship(string status)
{
    if(status == "Family" || status == "Friend" || status == "Business")
        relationship = status;
    else
        relationship = "";
}

int extPersonType::getBirthMonth() const
{
    return birthdate.getMonth();
}


void extPersonType::print() const
{
    personType::print();
    birthdate.print();
    address.print();
    if(relationship != "")
        cout << "Relationship: " << relationship << endl;
}