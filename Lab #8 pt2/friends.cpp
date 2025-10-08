//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program reads data from file and prints names from

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
string name, lastname;

inputfile.open("friends.txt");
for (int num = 1; num <= 10; num++)
 {   inputfile >> name >> lastname;
    cout << name << " " << lastname << endl;
}
inputfile.close();

cout << "finished \n";

return 0;
}