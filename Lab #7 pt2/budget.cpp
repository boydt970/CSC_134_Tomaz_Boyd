//@author: Tomaz Boyd
//@date: 10/03/2025
//@purpose: This program checks if you've remained within budget

//include the iostream directive
#include <iostream> 
#include <cmath>
#include <iomanip>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main(){
int input,budget,min,expenses;
cout << "How much is you budget?" << endl;//get budget
cin >> budget;
cout << "How many expenses do you have?" << endl;//get num of expenses
cin >> expenses;
for (int min = 1; min <= expenses; min++)
{
cout << "Enter cost of expense #" << min << endl;
cin >> input;
budget -= input;
cout << "Your budget is now at $" << budget << endl; 
}
if (budget > 0){
    cout << "Your under budget by $" << budget << endl;}
    else {
    cout << "Your over budget by $" << budget << endl;
}
return 0;
}