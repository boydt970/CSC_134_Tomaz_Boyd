//@author: Tomaz Boyd
//@date: 08/31/2025
//@purpose: This program calculates velocity from time and distance
//include the iostream directive
#include <iostream>
#include <cmath>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    
    double velocity;//mph
    double time = 4 ;//time
    double x = 400;//distance
   
    velocity = x / time;
           cout << "Distance = " << x << " miles" << endl;
           cout << "Time = " << time << " hours" << endl;
           cout << "The velocity of travel is " << velocity << " mph." << endl;
    return 0;
}