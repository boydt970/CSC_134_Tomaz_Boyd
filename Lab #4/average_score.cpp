//@author: Tomaz Boyd
//@date: 09/18/2025
//@purpose: This program determines average score

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
    cout << "Your average is: " << average << endl;//print average
    return 0;
}