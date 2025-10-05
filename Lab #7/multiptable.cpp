//@author: Tomaz Boyd
//@date: 10/05/2025
//@purpose: This program creates a multiple table to 10

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ 


    
   
    for (int num1 = 1; num1 <= 10; num1++) //loop
    { for ( int num2 = 1; num2 <= 10; num2++){
        cout << num1 * num2 << "\t";
      }
      cout << endl;
    }
    

    return 0; 
  }