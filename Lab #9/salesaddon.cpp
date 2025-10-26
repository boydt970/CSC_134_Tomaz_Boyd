//@author: Tomaz Boyd
//@date: 10/07/2025
//@purpose: This program writes 3 friends name to file

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    int sales,days,num;
    sales=0;
    days=0;
    num=1;
    int num1=0;
    std::setprecision(2);
     std::cout << std::fixed;
    cout << "how many days of sales do you have to enter" << endl;
    cin >> days;

    ofstream salesfile;
    salesfile.open("week9_lab2.txt.");

    for(int i=0;i<days;i++)
    { 
    for(int o=0;o<1;o++){
    cout<<"Sales for day "<< num <<endl;
    cin >> sales;
    }
    salesfile << "$" << sales << "\n";
    
    num1+=sales;
    num++;
    }
    salesfile << "=========================\n";
    salesfile << "Total sales: $" << fixed << num1 << endl;
    salesfile << "=========================\n";
    
    salesfile.close();
    
    return 0;
}