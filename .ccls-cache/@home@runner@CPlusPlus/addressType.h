#include <iostream>

using namespace std;

class addressType {
private:
   string streetAddress;
   string City;
   string State;
   int zipcode;

public:

   addressType(string streetAddress, string city, string state, int zipcode) {
       this->streetAddress = streetAddress;
       this->City = city;
       this->State = state;
       this->zipcode = zipcode;
   }

   addressType() {
       streetAddress = "";
       City = "";
       State = "XX";
       zipcode = 10000;
   }

   // setters
   void setStreetAddress(string streetAddress) {
       this->streetAddress = streetAddress;
   }

   void setCity(string city) {
       this->City = city;
   }

   void setState(string state) {
       if (state.length() == 2) {
           this->State = state;
       }
       else {
           cout << "State length exceeded with more than two chracters !" << endl;
           cout << "Only Two character Allowed !"<<endl;
           cout << "setting default value XX....... " << endl;
           this->State = "XX";
       }
   }

   void setZipcode(int zipcode) {
       if (zipcode >= 11111 && zipcode <= 99999) {
           this->zipcode = zipcode;
       }
       else {
           cout << "Zipcode length should between 11111 and 99999 !" << endl;
           cout << "setting default value 10000....... " << endl;
           this->zipcode = 10000;
       }
   }

   void setAddress(string address) {
       this->streetAddress = address;
   }

   void print() {
       cout << streetAddress << endl;
       cout << City<<" , ";
       cout << State<<" ";
       cout << zipcode<<" ";
       cout << endl;
   }

};
