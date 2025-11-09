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
int main()
{    int num= 16;
    int y=0,m=2,b=3,x=0;
    string space = " ";

    for (int i = 15; i > 0; i--)
    {cout << i << "|\n";
        if (i<=4 && i>=0){
        x=i;
        int y = m * x + b;
        cout << "X";
    }}
    
    for (int i = 1; i < 16; i++)
    {cout << i << "|";}
}