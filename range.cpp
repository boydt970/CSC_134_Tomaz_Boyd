//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program uses ranged based 

//include the iostream directive
#include <iostream> 
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>

//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
   {    const int m = 2;
    const int b = 3;
    const int xMAX = 15;
    const int yMAX = 15;
    int yvalues[5];
    int xvalues[] = {0,1,2,3,4};

    for(int i = 0; i < 5; i++){
        yvalues[i] = (m* xvalues[i] + b);
    }
    for (int y = yMAX; y >= 0; y--){
        cout << y << "|\n";
        for (int x = 0; x <= xMAX; x++){
            cout << "|" << x;
            bool completed = false;
            for(int i = 0; i < 5; i++){
                if (x == xvalues[i] && y == yvalues[i]){
                    cout << "X";
                    completed = true;
                }
            }
            if (!completed)
             cout << " ";
        }
    }
    
    
    return 0;
}