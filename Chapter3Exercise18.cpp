/*Program File Name: Chapter3Exercise18
Programmer: Patrick Liao
Date: 2.16.2025
Requirements: Given the listed formula, allow a user to enter principal, interest rate, and number of times compounded, and then return a report including interest and total amount in savings */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount;
    double principal;
    double rate;
    double tcompound;                                                                   //instantiate variables

    cout << "Please enter the balance in the account: ";
    cin >> principal;
    cout << "\nPlease enter the interest rate on the account: ";
    cin >> rate;
    cout << "\nPlease enter the number of times the account has been compounded: ";
    cin >> tcompound;                                                                   //prompt and get user values

    amount = principal * pow((1+ (rate/(100*tcompound))),tcompound);                    //calculate amount using user values

    cout << "\nInterest Rate: " << rate << "%"
        << std::fixed<< std::setprecision(2)
        <<"\nTimes Compounded: " << tcompound
        << "\nPrincipal: $" << principal
        << "\nInterest: $" << amount - principal
        << "\nAmount in Savings: $" << amount;                                          //display values
       
    return 0;
}

