//@author: Tomaz Boyd
//@date: 09/10/2025
//@purpose: This program determines test score

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
    if (average >= 90 && average <=100)
    {
    cout << "Your letter grade is a A";
    }
    else if (average >= 80 && average <=89)
    {
    cout << "Your letter grade is a B";
    }
    else if (average >= 70 && average <=79)
    {
    cout << "Your letter grade is a C";
    }
    else if (average >= 60 && average <=69)
    {
    cout << "Your letter grade is a D";
    }
    else if (average >= 0 && average <=59)
    {
    cout << "Your letter grade is a F";
    }
    else
    {
    cout << "";
    }

    return 0;
}