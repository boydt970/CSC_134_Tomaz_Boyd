//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program determines score

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   
float grades, count, sum, average, gradecount;

count = 1;
grades = 0;
sum = 0;
average = 0;
gradecount = 1;
        
cout << "Eneter a total of 10 grades. \n";
while (count <= 10){
cout << "Eneter grade " << gradecount << " : " ;
cin >> grades;


sum += grades;
count++;
gradecount++;
}
average = sum / 10;
cout << "your average grade is a " << average << endl;


    return 0;
}