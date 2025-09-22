//@author: Tomaz Boyd
//@date: 09/17/2025
//@purpose: This program will only set 212.34 as the temp

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
double temp;

cout << "Please enter the temperature to be set.\n";
cin >> temp;

cout << fixed << setprecision(2);//not in use

while (temp != 212.34){

cout << "please enter a different temp.\n";

cin >> temp;// loop will continue until desired temp is met
}

cout << "The temperature has been successfully set, thank you." << endl;

    return 0;
}