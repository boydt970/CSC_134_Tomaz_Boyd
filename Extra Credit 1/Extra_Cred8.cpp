//@author: Tomaz Boyd
//@date: 09/3/2025
//@purpose: This program finds area of a house

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
    Length = 50;//length of house
    Width = 32;//width of house
    A = Length * Width;//equation to determine area 
    //printing area of a house
    std::cout << "The area of the house equals " << A << " square foot." << std::endl;

    return 0;
}