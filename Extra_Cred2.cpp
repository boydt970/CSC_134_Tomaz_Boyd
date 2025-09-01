//@author: Tomaz Boyd
//@date: 09/1/2025
//@purpose: This program prints Hi!
//include the iostream directive
#include <iostream>
#include <string>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
   string age;//variable
   string verbiage;//variable
   string verbiage_end;//variable
   verbiage = "Today I am ";//string containing today i am 
   age = "25 ";//string containing age
   verbiage_end = "years old!";//containing years old
   //prints today i am 25 years old!
   cout << verbiage << age << verbiage_end << endl;
   
    return 0;
}