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
    

    int min,max,INPUT,loop;   
    loop = 0;    
    INPUT = 0;
    min = 0;
    max = 12;

    cout << "Input number for multiplication table: "; 
    
    cin >> INPUT;

    cout << "Number \t" << "Multiple" << endl;
    
    for(int loop = 0; min <= max; min++){
    cout << loop << " x " << INPUT << " = " << (INPUT * loop) << endl;
    loop++;
    }
    
  }rand(6)method/function