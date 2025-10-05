//@author: Tomaz Boyd
//@date: 10/04/2025
//@purpose: This program creates a square to the size of user input

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ int Input,loop;//variables
    Input = 0;
    loop = 1;

    cout << "Enter a number: ";
    cin>> Input;
   
    for (int num1 = 0; num1 < Input; num1++) //loop
    { for ( int num2 = 0; num2 < Input; num2++){
        cout << "* ";
      }
      cout << endl;
    }
    

    return 0; 
}