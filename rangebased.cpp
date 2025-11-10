//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program uses ranged based 

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{    int num[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int y=0,m=2,b=3,x=0;
    string space = " ";

    for (int i = 15; i > 0; i--)
    {cout << i << "|"<<endl;
        if (i<=4){
        x=i;
        y = m * x + b;
        cout << "X"<< endl;
    }}
    
    for (int i : num)
    {cout << i << "|";}
}