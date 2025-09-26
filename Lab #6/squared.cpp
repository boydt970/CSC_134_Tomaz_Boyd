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
    

    int minNum,maxNum,loop;
    
    minNum = 0;
    maxNum = 100;
    loop = 0;
    cout << "Number | " << "Number Squared \n" << "-----------------" << endl; 
    for(loop = 0; minNum <= maxNum; minNum++){
    cout << minNum << "\t\t" << (minNum * minNum) << endl;
    loop++;
    }
    cout <<"The accumulator value is: "<< loop;
  }