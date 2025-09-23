//@author: Tomaz Boyd
//@date: 09/22/2025
//@purpose: This program loops between a min and max counter

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ 
    const int MIN = 0,
    MAX = 10;

    int NUM,loop;
    loop = 0;
    for(NUM = MIN; NUM <= MAX; NUM++){
    cout << NUM <<"\n"<<endl;
    loop++;
    }
    cout <<"you looped "<< loop << " times";
  }