//@author: Tomaz Boyd
//@date: 08/31/2025
//@purpose: This program calculates the distance travelled

//include the iostream directive
#include <iostream>
#include <cmath>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    
    double velocity = 80;// speed of travel mph
    double time = 2 ;// how long you've travelled 
    double x;//distance of travel
    x = velocity * time;
    //prints the distance/time and velocity
           cout << "velocity = " << velocity << "mph " << endl;
           cout << "Time = " << time << "hours" << endl;
           cout << "The distance of travel is " << x << " miles." << endl;
    return 0;
}