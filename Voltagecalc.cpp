//@author: Tomaz Boyd
//@date: 08/31/2025
//@purpose: This program calculates the voltage using current and resistance
//include the iostream directive
#include <iostream>
#include <cmath>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    
    double V;//voltage
    double I = 10;//current
    double R = 2.0;//resistance
   
    V = I * R;
           
    cout << "The Voltage of the system is " << V << " volts." << endl;
    return 0;
}