//@author: Tomaz Boyd
//@date: 09/17/2025
//@purpose: This program determines if a triangle is a 3-4-5

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
double lengthx,heighty,angle,hypoc,pi;//variables
lengthx = 3;
heighty = 4;
pi = 3.14159265359;

hypoc = sqrt(pow(lengthx, 2) + pow(heighty, 2));//equation for c^2 = b^2 + a^2

angle = atan(heighty/lengthx) * 180 / pi;//tan equation for a triangle
cout << fixed << setprecision(2);

if (fabs(angle - 53.13) < 0.01){
cout << "This is a 3-4-5 triangle" << endl;}
else{
cout << "This is NOT a 3-4-5 triangle" << endl;
}
    return 0;
}