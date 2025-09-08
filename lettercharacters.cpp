//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream>
#include <ctype.h>
//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   

char input;

cout << "Enter a character and I will calculate if it is a vowel or consonant. ";
cin >> input;
if (isalpha(input))//checks for letters
{
    char upperInput = toupper(input);


if (upperInput == 'A')
    {
    cout << input << " is vowel";
   }   
   else if (upperInput == 'E')
    {
    cout << input << " is vowel";
    }
    else if (upperInput == 'I')
    {
    cout << input << " is vowel";
    }
    else if (upperInput == 'O')
    {
    cout << input << " is vowel";
    }
    else if (upperInput == 'U')
    {
    cout << input << " is vowel";
    }
    else
    { 
    cout << input << " is a consonant" << endl;
    }
}
    else{
        cout << "no numbers or symbols" <<endl;
    }
    return 0;
}