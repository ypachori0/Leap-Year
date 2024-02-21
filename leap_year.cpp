#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cout << "Please enter a year: " << endl;
   
   cin >> inputYear;
   
   if ((inputYear % 4 == 0 && inputYear % 100 != 0) || inputYear % 400 == 0){
      isLeapYear = true;
      
      cout << inputYear << " - leap year" << endl;
      }
      
      /* first checks if year is divisible by 4, then checks if it's a century year (inputYear %100 != 0).
      if it is a century year, we check if it is cleanly divisible by 400.
      */
   else{
      cout << inputYear << " - not a leap year" << endl;
      }

   return 0;
}