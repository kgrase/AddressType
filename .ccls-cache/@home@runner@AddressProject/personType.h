#include <string>
#pragma once
using std::string;

class personType
{
public:
    personType(); // non-parametric (default) constructor
    personType(string nameFirst, string nameLast); // We can create now a person as : personType someone("John", "Smith");

    void setFirstName(string nameFirst);
    void setLastName(string nameLast);
    string getFirstName() const;
    string getLastName() const;
    void print() const;

private:
    string firstName;
    string lastName;
};