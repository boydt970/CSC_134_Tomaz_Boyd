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
    //prints next months interest
    std::cout << "Next months balance " << nextdue << std::endl;

    return 0;
}