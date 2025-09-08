//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   

    double num1, num2, num3, average;
    //creating variables for scores and average
    
    cout << "please submit your 3 numbers for your average: ";
    cin >> num1 >> num2 >> num3;//user input
    average = (num1 + num2 + num3) / 3;// average calculation
    if (average >= 90)
    {
    cout << "Your letter grade is a A";
    }
    else if (average >= 80)
    {
    cout << "Your letter grade is a B";
    }
    else if (average >= 70)
    {
    cout << "Your letter grade is a C";
    }
    else if (average >= 60)
    {
    cout << "Your letter grade is a D";
    }
    else 
    {
    cout << "Your letter grade is a F";
    }

    return 0;
}