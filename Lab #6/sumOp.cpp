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
    

    int minNum,maxNum,loop,sumOp,adder;
    
    minNum = 1;
    maxNum = 50;
    loop = 0;
    sumOp = 0;
    adder = 10;
    
    for(loop = 0; minNum <= maxNum; minNum++){
    sumOp += loop + adder;
    cout << sumOp << endl;
    loop++;
    }
    cout <<"The accumulator value is: "<< loop;
  }