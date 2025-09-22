//@author: Tomaz Boyd
//@date: 09/18/2025
//@purpose: This program determines average score 10 grades

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
float grades, count, sum, average, gradecount;//variables

count = 1;//starting count
grades = 0;
sum = 0;
average = 0;
gradecount = 1;// starting grade count
        
cout << "Enter a total of 10 grades. \n";
while (count <= 10){
cout << "Enter grade " << gradecount << " : " ;
cin >> grades;//input


sum += grades;//adding to sum, count, and gradecount
count++;
gradecount++;
}
average = sum / 10;// averaging out score
cout << "Your average grade is a " << average << endl;


    return 0;
}