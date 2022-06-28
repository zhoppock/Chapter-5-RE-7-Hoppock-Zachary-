// Hoppock, Zachary
// floatToDollar.cpp
// Input a floating-point number into a function so it may output is as a dollar amount rounded to two decimal places.
// Version # 1

#include <iostream>
#include <iomanip>
using namespace std;

/**
Output a floating-point number as a dollar amount
@param number the floating point number
@return the dollar amount
*/

void make_dollar(double number)
{
 cout << "$" << fixed << setprecision(2) << number;

}

int main()
{
  double number;
  cout << "Type in any floating-point number: ";
  cin >> number;
  make_dollar(number);
  
  return 0;
}