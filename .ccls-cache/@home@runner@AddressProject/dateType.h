#pragma once  // to avoid multiple inclusions of header files
#include <iostream>

class dateType
{
public:
    dateType();
    dateType(int m, int d, int y); // USA system m/d/yyyy, not European /d/m/yyyy
    bool checkLeapYear(int year) const;
    int daysOfMonth(int m, int y) const;
    void setDate(int m, int d, int y);
    int getDay() const { return day;}  // 3 inline functions, Too small, we don't bother to put them in cpp file
    int getMonth() const { return month;}
    int getYear() const { return year;}
    void print() const;
private:
    int month;
    int day;
    int year;

};

