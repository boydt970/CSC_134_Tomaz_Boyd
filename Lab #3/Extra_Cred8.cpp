//@author: Tomaz Boyd
//@date: 09/3/2025
//@purpose: This program finds volume of sphere

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    double Length;
    double Width;
    double A;
    Length = 50;//pi math measurement
    Width = 32;//radius 7 to the 3rd power
    A = Length * Width;//equation to determine volume
    //printing volume of a sphere
    std::cout << "The area of the house equals " << A << " square foot." << std::endl;

    return 0;
}