//@author: Tomaz Boyd
//@date: 08/27/2025
//@purpose: This program calculates the product of two numbers

//include the iostream directive
#include <iostream>
//include the string class
#include <string>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    //saves name of movie of Movie. 
    std::string Movie;
    Movie = "The 5th Wave ";
    //saves the Main character names under Characters.
    std::string Characters;
    Characters = "Chloë Grace Moretz, Nick Robinson, Alex Roe, Zackary Arthur and Liev Schreiber.";
    //prints favorite movie and name of main characters.
    cout << "My Favorite Movie is " << Movie << endl;
    cout << "The main characters of " << Movie << "are " << Characters << endl;
    return 0;
}