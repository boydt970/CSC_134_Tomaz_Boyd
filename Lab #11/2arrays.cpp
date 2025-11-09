//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program arrays 0-4 being added and averaged

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
{   const int NUM = 4;
    int array [NUM];
    int avg=0;
    array [0] = 200;
    array [1] = 500;
    array [2] = 700;
    array [3] = 550;
    array [4] = 100;
    
    avg = (array [0] + array [1] + array [2] + array [3] + array [4]) / 5;
    cout << "The average is " << avg << endl;
    return 0;
}