//@author: Tomaz Boyd
//@date: 10/05/2025
//@purpose: This program creates a user chess board

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
    { for ( int white = 0; white < Input; white++){
        if  ((num1 + white) % 2 == 0 )// if its a remainder = to zero, else  
             cout << "* ";
        else
        cout << " ";
     }
      cout << endl;
    }
    

    return 0; 
}