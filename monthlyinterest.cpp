//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program provides next months interest charge

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    double balance = 3284.87;// monthly balance
    double interest = .2899 / 12;//interest rate
    double nextdue = balance + (interest * balance);// calculation for interest add on
    double interestincrease = interest * balance;
    //prints next months interest
    std::cout << "Next months balance is " << nextdue << " dollars." << std::endl;
    std::cout << "You paid a total of " << interestincrease << " dollars in interest for the month." << std::endl;
    return 0;
}