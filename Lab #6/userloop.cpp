//@author: Tomaz Boyd
//@date: 09/22/2025
//@purpose: This program loops num input from user

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ 
    const int MIN = 0;

    int NUM,max,INPUT,loop;
    loop = 0;    
    INPUT = 0;

    cout << "Input loop count: "; 
    
    cin >> INPUT;
    
    for(max = 0; max <= INPUT; max++){
    cout << max <<"\n"<<endl;
    loop++;
    }
    //cout <<"you looped "<< loop << " times";
  }