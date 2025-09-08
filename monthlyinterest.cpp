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
    double subtract = 400;
    int count;
    cout << "what is your current balance: ";
    cin >> balance;//user input

    cout << "what is your current interest rate: ";
    cin >> interest;//user input
    
    newinterest = (interest / 100) / 12;//interest calculation program convert percentage to decimal
    double nextdue = balance + (newinterest * balance);// calculation for interest add on
    double interestincrease = newinterest * balance;
    balance == nextdue;
    //prints next months interest
    std::cout << "Next months balance is " << nextdue << " dollars." << std::endl;
    std::cout << "You paid a total of " << interestincrease << " dollars in interest for the month." << std::endl;
    if (nextdue >= 0)
    {
        double nextdue = balance + (newinterest * balance);// calculation for interest add on
    double interestincrease = newinterest * balance;
    nextdue = nextdue - subtract;
    balance == nextdue;
    cout << nextdue << endl;
    }

    //if (balance > 0)
    //while (balance >= 0) {
        //(balance -= subtract) * newinterest;
        //for (count = 0; count < 5; count++)
        //(nextdue - subtract) * newinterest;
    
    //cout << balance << endl;
    //balance - 500; 
    return 0;
}