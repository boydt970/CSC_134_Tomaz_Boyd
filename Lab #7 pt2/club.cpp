//@author: Tomaz Boyd
//@date: 10/03/2025
//@purpose: This program finds the increase of a club membership over the total of 5 years

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ float membership,increase,years,breakdown;//variables
    membership = 250000;
    increase = .06;
    years = 5;
    breakdown = 0;

    for (int year = 1; year <= 5; year++){

    breakdown = membership * increase;// so breakdown isnt a static number being outside the loop
    membership += breakdown; //add to membership
    cout << "year " << year << " will increase membership by $" << breakdown 
    << " for a membership total of $" << membership << endl;
    }
    cout << "membership total after 5 years will be $" << membership;



}