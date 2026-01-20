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
   double a = -0.01568;

   double b = 1.00000;

   double  c = 1.5;
     
    double x;//distance of travel
    double squared  = (b * b - 4 * a * c);
    //prints the distance/time and velocity
    double answer1 = (-b - sqrt(squared)) /(2*a);
    double answer2 = (-b + sqrt(squared)) /(2*a);
    cout << answer1 << endl;
    cout << answer2 << endl;
    return 0;
}