//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program shows array in reverse from how it was inputted

// include the iostream directive
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

// use the standard namespace
using namespace std;

// define the main() function/method
int main()
{
    const int NUM = 5;
    int highest;
    int array[NUM];
    
    for(int count = 0; count < NUM; count++)
    {
        cout << "Number " << (count +1) << endl;
        cin >> array[count];
    }

    highest = array[0];
    for(int count = (NUM - 1); count >= 0 ; count--)
    {
        cout << array[count] << "\n";
    
    }
    

    return 0;
}