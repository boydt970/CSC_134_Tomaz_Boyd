//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
double count, number, laspe;
number = 290;
count = 390;
laspe = 0;



while (number != count){

cout << number <<"\t";
number++;
laspe++;

}

cout << "you have looped " << laspe << " times." << endl;

    return 0;
}