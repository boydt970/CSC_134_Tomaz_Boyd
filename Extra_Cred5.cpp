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
    C;//empty varible to be assigned later
    F = -32;//fahrenheit degrees
    C = F * 5/9;//equation to determine C/Celsius
    //printing temperatures in both forms
    std::cout << F << " Fahrenheit = " << C << " Celsius " << std::endl;

    return 0;
}