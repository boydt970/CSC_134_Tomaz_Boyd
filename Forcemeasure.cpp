//@author: Tomaz Boyd
//@date: 08/31/2025
//@purpose: This program calculates force from mass and acceleration 
//include the iostream directive
#include <iostream>
#include <cmath>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    //assigning each a unit to be calculated
    double F;//force
    double m = 10;//mass
    double a = 9.81;//acceleration
   
    F = m * a;
           
    cout << "The system measures a force of  " << F << " Newetons." << endl;
    return 0;
}