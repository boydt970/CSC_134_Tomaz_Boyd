//@author: Tomaz Boyd
//@date: 09/1/2025
//@purpose: This program converts fahrenheit to celsius

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    double C;
    double F;
    double deduct;
    deduct = -32;// -32 to subtract from fahrenhiet before * by 5/9
    C;//empty varible to be assigned later
    F = 90;//fahrenheit degrees
    C = (F - deduct) * 5/9;//equation to determine C/Celsius
    //printing temperatures in both forms
    std::cout << F << " Degrees Fahrenheit = " << C << " Degrees Celsius " << std::endl;

    return 0;
}