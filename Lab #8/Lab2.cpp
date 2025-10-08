//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program neatly recreates image of lab 2 by writing to file

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    int num1,num2;
    num1 = 789;
    num2 = 7;
    float num3,num4;
    num3 = 12.00;
    num4 = 84.00;

std :: string symbol;
symbol = "******************************\n";


cout << "Now writing data to the file. \n";
ofstream outputfile;
outputfile.open("lab2.txt");
outputfile << symbol;
outputfile << "\t\t Shopping Cart\n";
outputfile << symbol;
outputfile << "product code \t qty \t price \n";
outputfile << "\t" << num1 << "\t\t\t " << num2 << "\t\t $" << num3 <<"\n";
outputfile << "\n\t\t\t\t\tTotal: $" << num4;
outputfile.close();
cout << "finished \n";
return 0;
}
