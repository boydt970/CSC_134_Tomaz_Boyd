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

    double balance,interest,newinterest,subtract;
    balance = 0;
    interest = 0;
    newinterest = 0;
    subtract = 0;
    int count = 0;
    cout << "What is your current balance: $ ";
    cin >> balance;//user input

    cout << "What is your current interest rate (ex: 16.99): ";
    cin >> interest;//user input
    
    cout << "Payment: $ ";
    cin >> subtract;//user input

    newinterest = (interest / 100) / 12;//interest calculation program convert percentage to decimal
    double nextdue = balance + (newinterest * balance);// calculation for interest add on
    double interestincrease = newinterest * balance;
    balance == nextdue;
    //prints next months interest
    std::cout << "Next months balance is " << nextdue << " dollars." << std::endl;
    std::cout << "You paid a total of " << interestincrease << " dollars in interest for the month." << std::endl;

    return 0; 
}