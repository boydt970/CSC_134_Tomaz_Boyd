//@author: Tomaz Boyd
//@date: 08/27/2025
//@purpose: This program calculates the product of two numbers

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    double newyork;
    double newyorkaverage;
    double denver;
    double denveraverage;
    double phoenix;
    double phoenixaverage;
    double change;
    
    newyork = 85.0;
    denver = 88.0;
    phoenix = 106.0;
    change = .02;
    newyorkaverage = newyork + (newyork * change);
    denveraverage = denver + (denver * change);
    phoenixaverage = phoenix + (phoenix * change);
    //prints comment from 2 numbers above
    std::cout << "Average of july high tempteratures are " << std::endl;
    std::cout << "New York City = " << newyork << " degrees" << std::endl;
    std::cout << "Denver = " << denver << " degrees" << std::endl;
    std::cout << "Phoenix = " << phoenix << " degrees" << std::endl;
    std::cout << "Average of july high tempteratures if increased by 2%" << std::endl;
    std::cout << "New York City = " << newyorkaverage << " degrees" << std::endl;
    std::cout << "Denver = " << denveraverage << " degrees" << std::endl;
    std::cout << "Phoenix = " << phoenixaverage << " degrees" << std::endl;
    return 0;
}