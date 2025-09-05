//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program calculates averages temps of july in 3 citys and an average increase of 2 percent

//include the iostream directive
#include <iostream>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{
    //Variables to be assigned
    double newyork;
    double newyorkaverage;
    double denver;
    double denveraverage;
    double phoenix;
    double phoenixaverage;
    double change;
    //Assigning variables temps
    newyork = 85.0;
    denver = 88.0;
    phoenix = 106.0;
    change = .02;
    //Increasing recent temps by 2 percent
    newyorkaverage = newyork + (newyork * change);
    denveraverage = denver + (denver * change);
    phoenixaverage = phoenix + (phoenix * change);
    //Prints averages of july high temps and temps increased by 2%
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