//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: not finished 

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
{       int m = 2;
        int b = 3;
        int x[] = {4,3,2,1};
        int count = 0;
        int y [4];
        cout << "x | y" << endl;
        cout << "_____" << endl;

        for(int x_position : x){
            y[count]=(m*x_position)+b;
            cout << x_position << " | "<< y[count] << endl;
            count++;
        }
        cout << "\n\n";

    for (int i = 15; i > 0; i--){
        cout << "_";
        cout << i ;
        bool completed = false;
    
        for (int b = 4; b>=0; b--){
        int point = (m * x[i]) + b;
        cout << i << "|";
        if (point == i){
            cout << i << "|";
        for(int c = 0; c < point -2; c++){
            if(x[b] > 0){
                cout << " ";
            }
        }
        cout << "X" <<endl;
        completed = true;
        }
    }
    if (completed == false){
        cout << i << "|" <<endl;}
    }
    cout << " ";
        for(int d = 0; d < 20; d++){
            cout << "|";
            cout << d;
        }
        return 0;
}