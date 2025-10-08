//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program shows how writing to file with no new line will look

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
std :: string movies;
movies = "Bourne Identity "
"Star Wars Episode IV "
"The Hunger Games "
"Dead Pool "
"X-Men First Class "
"Star Wars Espisode V "
"Get Out";
cout << "Now writing data to the file. \n";
ofstream outputfile;
outputfile.open("lab3.txt");
outputfile << movies;
outputfile.close();
cout << "finished \n";
return 0;
}

