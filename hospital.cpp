#include <iostream>
#include <string>
using namespace std;




//surgery class to hold surgery types data
class surgery {
    public:
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
};


//pharmacy class to hold medicine type data
class Pharmacy {
    public:
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
};


//the patient account class
class patientAccount{
    public:
    string patientName;
    int numberOfDays;
    int pricePerDay;
    int surgeryType;
    int medicineUsed;
    int total;

    double printBill()
    {
      numberOfDays = 5;
      pricePerDay = 10;
      medicineUsed = 4;
      surgeryType = 2;

      total = (numberOfDays * pricePerDay) + medicineUsed + surgeryType;

      cout <<"your total is: " << total << endl;
      return total;
    }
};




//the main program
int main ()
{

patientAccount billObject;

billObject.printBill();
//ask the patient name

//check if he had a surgery

//if yes, show the list of surgeries and pick one

//ask if he used medicine

//if yes, show the list of medicine and pick one


//ask how many days he stayed and enter the number of days

//at the end show the bill with

/*
patient name
number of days + cost per day
the surgery + cost
the medicne + cost
total 

*/








  return 0;
}
