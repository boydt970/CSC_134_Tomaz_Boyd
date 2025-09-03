//@author: Tomaz Boyd
//@date: 09/1/2025
//@purpose: This program finds area of circle

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    double pi;//
    double radius;// radius of circle
    double A;// area
    pi = 3.1415;// pie measurement
    radius = 19 * 19;//radius to the power of 2
    A = pi * radius;//equation to determine Area
    //printing Area of circle
    std::cout << "Area equals " << A << std::endl;

    return 0;
}