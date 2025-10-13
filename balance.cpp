//@author: Tomaz Boyd
//@date: 09/4/2025
//@purpose: This program provides next months interest charge

//include the iostream directive
#include <iostream>
#include <fstream>


//use the standard namespace 
using namespace std;

//define the main() function/method
int main()
{   

    double balance,interest,interestrate,numberof,num,savings;
    double subtract;
    int count = 0;
    num = 0;
    savings = 0;
    int var = 1;
    int Date;
    std::string Name;
    std::string star;
    star = "--------------------------------------------------------------------------------------";
    time_t now = time(0);

    cout << "How many balances do you have? ";
    cin >> numberof;//user input

    cout << "Name?\n";
    cin >> Name;

    for(count = 0; count < numberof; count++){
    
    if (num > count)
    num = 0;

    for(int loop = 0; loop < 1; loop++){
    

    cout << "What is your balance for #" << var << endl;
    var++;
    cin >> balance;

    cout << "what is your current interest rate:?\tex:28.99 not 2899 \n";
    cin >> interest;//user input
    
    cout << "payment you'd like to make monthly: \n";
    cin >> subtract;//user input

    interestrate = (interest / 100) / 12;//interest calculation program convert percentage to decimal
    double interestincrease = interestrate * balance;
    double nextdue = balance + interestincrease;// calculation for interest add on
    balance == nextdue;
    

    std::cout << "Next months balance is " << nextdue << " dollars." << std::endl;
    std::cout << "You paid a total of " << interestincrease << " dollars in interest for the month." << std::endl;

    ofstream outputfile;
    outputfile.open("finace.txt", ios::app);
    outputfile << "\n";
    outputfile << Name << endl;
    outputfile << star << endl;
    outputfile << "Your balance of $" << balance << endl;

    while (nextdue > 0)
    {
    interestincrease = interestrate * nextdue;
    nextdue += interestincrease;
    nextdue -= subtract;
    savings = subtract - nextdue;
    num++;

    if (nextdue < 0)
            nextdue = 0;
    if (subtract <= interestincrease)
    cout << "Your payment is too low to cover the monthly interest. " << endl;
    cout << num << ": $" << nextdue << " you paid " << interestincrease << " in interest" << endl;
    if (nextdue < subtract)
    
    cout << "Balance" << " is less than monthly payment you will save $" << savings << endl;
    
    outputfile << "Month " << num << " with your payment of $" << subtract << " Your next due will be $" << nextdue << " With an increase of $" << interestincrease << " in interest" << endl;
    
    }

    outputfile << "In " << num << " months your initial balance of $" << balance << " will be paid" << endl;
    outputfile.close();
    cout << "At a paymemt of $" << subtract << " dollars your balance will be finished in " << num << " months." << endl;
    }
}
    return 0;
} 

    
    
