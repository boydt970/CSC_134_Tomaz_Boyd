//@author: Tomaz Boyd
//@date: 09/19/2025
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
float grades, count, sum, average, gradecount, one, two, three, four, five, six, seven, eight, nine, ten;

count = 1;
grades = 0;
sum = 0;
average = 0;
gradecount = 1;
        
cout << "Eneter a total of 10 grades. \n"; // asking for input

while (count <= 10){
cout << "Eneter grade " << gradecount << " : " ; //asking for each grade input
cin >> grades; //receiving input
if (count == 1) //giving each grade a variable to be stored
one = grades;
else if (count == 2 )
two = grades;
else if (count == 3 )
three = grades;
else if (count == 4 )
four = grades;
else if (count == 5 )
five = grades;
else if (count == 6 )
six = grades;
else if (count == 7 )
seven = grades;
else if (count == 8 )
eight = grades;
else if (count == 9 )
nine = grades;
else if (count == 10 )
ten = grades;


sum += grades; // adding grades through each loop to be averaged later 
count++;
gradecount++;
}
average = sum / 10; // averaging the grades
cout << "Your average grade is a " << average << endl; // displaying average


    return 0;
}