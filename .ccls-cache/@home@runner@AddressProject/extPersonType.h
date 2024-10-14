#pragma once

#include "personType.h"
#include "dateType.h"
#include "addressType.h"

#include <string>

using std::string;

class extPersonType: public personType
{
public:
    extPersonType();
    extPersonType(string nameF, string nameL, int birthDay, int birthMonth, int birthYear, string street, string city, string state, int zip, string phone, string status);

    void setPhoneNumber(string phone);
    void setRelationship(string status);
    string getPhoneNumber() const {return phoneNumber;}
    string getRelationship() const {return relationship;}
    int getBirthMonth() const;
    void print() const;

private:
    dateType birthdate;
    addressType address;
    string phoneNumber;
    string relationship;
};