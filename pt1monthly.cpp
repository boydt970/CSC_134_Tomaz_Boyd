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
    double subtract;
    int count = 0;
    cout << "what is your current balance: ";
    cin >> balance;//user input

    cout << "what is your current interest rate: ";
    cin >> interest;//user input
    
    cout << "payment you'd like to make monthly: ";
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