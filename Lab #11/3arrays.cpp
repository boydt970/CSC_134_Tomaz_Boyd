//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program gets numbers from file and add them to array also showing total amount

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
{  
    int count = 0,total = 0;
    int const ARRAYSIZE = 5;
    int short array[5];
    ifstream salesfile;
    
    salesfile.open("sales.txt");
    while(count < ARRAYSIZE && salesfile >> array [count])
    count++;
    
    salesfile.close();
    for (count = 0; count < ARRAYSIZE; count++)
    {
    cout << "$" << array[count] << "\n";
    total += array[count];
    }
    cout << "Total sales amount $" << total << "\n";
return 0;
}