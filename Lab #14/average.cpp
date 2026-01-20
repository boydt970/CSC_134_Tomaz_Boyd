//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program uses ranged based 

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>

//use the standard namespace 
using namespace std;

//define the main() function/method



void averageValues(int num1, int num2, int num3)
{
    int average = (num1 + num2 + num3) / 3;
    cout << "The average is " << average;
    return; 
}

int main()
   { int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter 3 numbers to be average.. \n";
    cin >> num1;
    cout << "Enter #2 \n";
    cin >> num2;
    cout << "Enter #3 \n";
    cin >> num3;
    averageValues(num1, num2, num3);
    return 0;
   }