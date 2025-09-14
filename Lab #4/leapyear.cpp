//@author: Tomaz Boyd
//@date: 09/10/2025
//@purpose: This program determines leap year

//include the iostream directive
#include <iostream>
#include <ctype.h>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   

int input;

cout << "Enter the year: \n";
cin >> input;
if ((input % 400 == 0) || (input % 4 == 0 && input % 100 != 0)){
        cout << "The year you entered " << input << " is a leap year." << endl;
    } else {
        cout << "The year you entered " << input << " is NOT a leap year." << endl;
    }

    return 0;
}