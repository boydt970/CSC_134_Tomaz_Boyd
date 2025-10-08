//@author: Tomaz Boyd
//@date: 10/03/2025
//@purpose: This program writes movies to file

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
movies = "Bourne Identity \n"
"Star Wars Episode IV \n"
"The Hunger Games \n"
"Dead Pool \n"
"X-Men First Class \n"
"Star Wars Espisode V \n"
"Get Out";
cout << "Now writing data to the file. \n";
ofstream outputfile;
outputfile.open("lab1.txt");
outputfile << movies;
outputfile.close();
cout << "finished \n";
return 0;
}


