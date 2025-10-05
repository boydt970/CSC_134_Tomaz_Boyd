//@author: Tomaz Boyd
//@date: 09/22/2025
//@purpose: This program loops num input from user

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{ 
    

    int min,max,INPUT,loop;   
    loop = 0;    
    INPUT = 0;
    min = 0;
    max = 12;
    
    srand(time(0)); //seed the random number
    int random = rand() % 6 + 1; 
    cout << "How many times do you want to roll the dice? ";
    cin >> INPUT; //get user input for number of rolls
    cout << "Rolling the dice " << INPUT << " times..." << endl; //output
    for (min = 1; min <= INPUT; min++) //loop
    {
      srand(time(0)); //seed the random number
    int random = rand() % 6 + 1; //generate a random numbers
        cout << "Roll " << ": " << min << endl; 
    }
    cout << "The results are: " << random << endl; 

    return 0; 
  }