#include <iostream>

using namespace std;

class dateType {
private:
int  month;
int day;
int year;

public:

dateType() {
month = 1;
day = 1;
year = 1900;
}

dateType(int m, int d, int y) {
setDate(m, d, y);
}

bool checkLeapYear(int year) {
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
return true;
}
else {
return false;
}
}

int isLastDayofMonth(int m, int y) {
if (m == 2) {
bool check = checkLeapYear(y);
if(check == true) {
m = 29;
return m;
   }
else {
return 28;
}
}
else if (m == 4 || 6 || 9 || 11) {
return 30;
}
else {
return 31;
}
}

void setDate(int m, int d, int y) {

if (y >= 1990) {
year = y;
}
else {
cout << "Invlaid Year setting to default value 1900 !" << endl;
year = 1900;
}

if (m >= 1 && m <= 12) {
month = m;
}
else {
cout << "Invlaid Month setting to default value 1 !" << endl;
month = 1;
}

int isLastday = isLastDayofMonth(m, y);

if (d >= 1 && d <= isLastday) {
day = d;
}
else {
cout << "Invlaid Date Setting to default value 1 !" << endl;
day = 1;
}

}

void print() {
cout << month << "/" << day << "/" << year << endl;
}

};

