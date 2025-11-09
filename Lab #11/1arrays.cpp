//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program places 10 grades in arrays and averages it

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   int product=0, avg=0;
   int array [9];
    for (int i = 0; i <= 9; i++) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> array[i];
        product += array[i]; 
    }
    avg = product / 10;
    cout << "The average is " << avg << endl;
    return 0;
}