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



void squareNumber(int num)
{
    int squared = num * num;
    cout << num << " squared = " << squared << endl;
    return; 
}

int main()
   { int num;
    cout << "Enter number to be squared \n";
    cin >> num;
    squareNumber(num);
    return 0;
   }