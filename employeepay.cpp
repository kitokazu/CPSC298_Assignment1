#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  float socialSecurity = 0.06;
  float fedIncome = 0.14;
  float stateIncome = 0.05;
  int medInsurance = 10;
  int salary = 16;
  int normalHours = 40;
  float grossPay;
  float netPay;
  int hoursWorked;

  cout << "How many hours were worked?" << endl;
  cin >> hoursWorked;

  if (hoursWorked > normalHours) {
    int overTimeHours = hoursWorked - normalHours;
    grossPay = (overTimeHours*salary*1.5) + (hoursWorked*salary);
  } else {
    grossPay = hoursWorked * salary;
  }


  cout << "Gross pay: $" << grossPay << endl;

  socialSecurity *= hoursWorked;
  fedIncome *= hoursWorked;
  stateIncome *= hoursWorked;
  cout << "Social Security withholding amount: $" << socialSecurity << endl;
  cout << "Federal Income withholding amount: $" << fedIncome << endl;
  cout << "State Income withholding amount: $" << stateIncome << endl;
  cout << "Medical Insurance withholding amount: $" << medInsurance << endl;

  netPay = grossPay - (socialSecurity + fedIncome + stateIncome + medInsurance);
  cout << "Net pay: $" << netPay << endl;


  return 0;



}
