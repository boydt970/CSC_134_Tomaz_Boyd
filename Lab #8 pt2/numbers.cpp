//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program reads data from file and prints values

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    
ifstream inputfile;
int number;
number = 0;

inputfile.open("numbers.txt");
cout << "Reading from file...\n";
for (int num = 1; num <= 10; num++)
 {   inputfile >> number;
    cout << number << endl;
}
inputfile.close();

cout << "Finished. \n";

return 0;
}