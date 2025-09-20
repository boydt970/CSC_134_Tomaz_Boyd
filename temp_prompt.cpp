//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
double set, temp;
set = 212.34;
cout << "Please enter the temperature to be set.\n";
cin >> temp;

cout << fixed << setprecision(2);

while (temp != 212.34){

cout << "please enter a different temp.\n";

cin >> temp;
}

cout << "The temperature has been successfully set, thank you." << endl;

    return 0;
}