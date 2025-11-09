//@author: Tomaz Boyd
//@date: 11/05/2025
//@purpose: This program tells if a card number is vaild

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
{    
    int total,sum, digit;
    total = 0;
    digit = 0;
    string cardnum;

    cout << "Enter card number" << endl;
    cin >> cardnum;

    reverse(cardnum.begin(), cardnum.end());

    for (int i = 0; i < cardnum.length(); i++ ){
        digit = cardnum[i] - '0';

        if(i % 2 == 0) {
            digit *= 2;
        if(digit > 9)
            digit -= 9;
        }
        total += digit;
    }
    if (total % 10 == 0)
    cout << "vaild" << endl;
    else
    cout << "invalid" << endl;
    
    return 0;

}