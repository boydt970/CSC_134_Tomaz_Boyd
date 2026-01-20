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



void loop(int num)
{
    
    if (num < 1000){
    for(int start = 1; start <= num; start++){
        cout << start << endl;
    }}
    else 
    cout << "invaild number request 0 to 999 \n";
}

int main()
   { int num = 0;
    
    cout << "Enter a number to be iterated.. \n";
    cin >> num;
    
    loop(num);
    return 0;
   }