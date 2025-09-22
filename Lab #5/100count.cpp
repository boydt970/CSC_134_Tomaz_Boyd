//@author: Tomaz Boyd
//@date: 09/17/2025
//@purpose: This program counts to 100

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
double count, number, laspe;//counter, number = starting number, laspe how many loops
number = 1;
count = 100;
laspe = 0;



while (number != count+1){// number is not equal to count run

cout << number <<"\n";
number++;//add
laspe++;//add

}

cout << "you have looped " << laspe << " times." << endl;

    return 0;
}