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

    double balance,interest,newinterest;
    cout << "what is your current balance: ";
    cin >> balance;
    //double balance = 3284.87;// monthly balance
    cout << "what is your current interest rate: ";
    cin >> interest;
    //double interest = .2899 / 12;//interest rate
    newinterest = (interest / 100) / 12;
    double nextdue = balance + (newinterest * balance);// calculation for interest add on
    double interestincrease = newinterest * balance;
    //prints next months interest
    std::cout << "Next months balance is " << nextdue << " dollars." << std::endl;
    std::cout << "You paid a total of " << interestincrease << " dollars in interest for the month." << std::endl;
    
    return 0;
}