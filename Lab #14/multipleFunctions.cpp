//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program uses ranged based 

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>

//use the standard namespace 
using namespace std;

//define the main() function/method
void intro()
{
    cout << "In this program we will obatin a number from you to be to squared.\n";
    cout << "We will next ask for 3 numbers to be averaged. \nthanks for your participation. " << endl;
}
int squareNumber(int num)
{
    return num * num; 
}
int averageValues(int num1, int num2, int num3)
{   
    return (num1 + num2 + num3) / 3; 
}
void multipleFuncs()
{   
    int number = 0;
    cout << "Enter number to be squared \n";
    cin >> number;
    int resultsquare = squareNumber(number);
    cout << number << " squared is " << resultsquare << endl;

    int value1 = 0;
    int value2 = 0;
    int value3 = 0;

    cout << "Enter 3 numbers to be average.. \n";
    cin >> value1;
    cout << "Enter #2 \n";
    cin >> value2;
    cout << "Enter #3 \n";
    cin >> value3;

    int average = averageValues(value1, value2, value3);
    
    
    cout << "The average of numbers " << value1 << ", " <<  value2 << ", and " << value3 << ", is " << average << endl; 
    return;
}

int main()
   { 

    intro();

    multipleFuncs();



    return 0;
   }