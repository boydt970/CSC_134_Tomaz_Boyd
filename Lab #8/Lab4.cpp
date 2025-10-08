//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program writes sum values to file starting from 0

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
    int input;
    input = 0;
cout << "Number of iterations? ";
cin >> input;
cout << "Now writing data to the file. \n";

ofstream outputfile;
outputfile.open("lab4.txt");
for (int num1 = 0; num1 < input; num1++)
{
    outputfile << num1;
    
}
outputfile.close();
cout << "...\n";
cout << "Done Writing.... \n";
return 0;
}

