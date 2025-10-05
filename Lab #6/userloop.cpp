//@author: Tomaz Boyd
//@date: 09/22/2025
//@purpose: This program loops num input from user

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ 
  

    int INPUT,loop;   
    loop = 0;    
    INPUT = 0;

    cout << "Input loop count: "; 
    
    cin >> INPUT;
    
    for(int max = 0; max <= INPUT - 1; max++){
    cout << max <<" "<< endl;
    loop++;
    }
    cout <<"you looped "<< loop << " times";
  }