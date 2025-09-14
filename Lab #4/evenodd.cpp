//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
int number;
cout << "Enter a number and I will calculate if it is ";
cout << "even or odd. ";
cin >> number;
if (number % 2 == 0)
    cout << number << " is even";
    else
    cout << number << " is odd";
    return 0;
}