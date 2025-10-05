//@author: Tomaz Boyd
//@date: 10/04/2025
//@purpose: This program runs user input to create a right triangle

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
   
    for (int num1 = 1; num1 <= Input; num1++) //loop
    { for ( int num2 = 0; num2 <= 1; num2++){
        

    std::string stars(num1 * num2, '*');// string to use astioks
        cout << stars;
      }
      cout << endl;
    }
    

    return 0; 
  }