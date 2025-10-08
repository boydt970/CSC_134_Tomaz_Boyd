//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program writes 3 friends name to file

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
    string char1;
    string char2;
    string char3;
    string char4;

cout << "Enter your three friend names. \n";
cout << "Friend #1: ";
cin >> char1;
cout << "Friend #2: ";
cin >> char2;
cout << "Friend #3: ";
cin >> char3;



ofstream outputfile;
cout << "Now writing data to the file. \n";
outputfile.open("lab5.txt");
    outputfile << char1 << endl;
    outputfile << char2 << endl;
    outputfile << char3 << endl;
outputfile.close();

cout << "finished \n";

return 0;
}
