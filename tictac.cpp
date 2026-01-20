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

    bool checkWin(string board[3][3], string position){
      for(int check = 0; check < 3; check++){
        if(board[check][0] == position && board[check][1] == position && board[check][2] == position)
        return true;
      }
      for(int check = 0; check < 3; check++){
        if(board[0][check] == position && board[1][check] == position && board[2][check] == position)
        return true;
      }
      
        if(board[0][0] == position && board[1][1] == position && board[2][2] == position)
        return true;
      
      if(board[0][2] == position && board[1][1] == position && board[2][0] == position)
        return true;
        return false;
    }
//define the main() function/method
int main()
   {
    int input1 = 0;
    int input2 = 0;
    int player1 = 0;
    std::string player;
    const int ROWS = 3;
    const int COLS = 3;
    int choice = 0;

    std::string board [ROWS][COLS] = 
    {{"*","*","*"},
    {"*","*","*"},
    {"*","*","*"}};
    cout << "choose a even number for X's and odd for O's" << endl;
    cin >> choice;

    cout << "The board is laid out in 3 rows and 3 coloums" << endl;
    cout << "To make a placement type one of these positions" << endl;
    cout << "[0][0],[0][1],[0][2]" << endl;
    cout << "[1][0],[1][1],[1][2]" << endl;
    cout << "[2][0],[2][1],[2][2]" << endl;

    for (int turn = 0; turn < 9; turn++){
    if (player1 % 2 == 0){
     player = "Player 1";}
    else{ 
    player = "Player 2";}

    


    cout << "enter the placement you want " << player << endl;
    cout << "position 1 []" << endl;
    cin >> input1;
    cout << "position 2 []" << endl;
    cin >> input2;
    //if (input1 || input2 > 2){
    //cout << "Choose a number 0 -2";}
   // if (board[input1][input2] == "X" || "O"){
     // cout << "invaild spot" << endl;
      //player1--;
    //}
    if (board[input1][input2]!= "*"){
    cout << "position taken try again:\n";
    cout << "position 1 []" << endl;
    cin >> input1;
    cout << "position 2 []" << endl;
    cin >> input2; }
    else{

    };

    if (choice % 2 == 0){
    board[input1][input2] = "X";
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "----------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "----------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;}
    else{
    board[input1][input2] = "O";
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "----------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "----------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;}
    //if(checkwin(board, "X" || "O")){
      //cout << "you win";}
      
    string position = (choice % 2 == 0 ? "X" : "O");

// Check for winner
if (checkWin(board, position)) {
    cout << player << " wins!" << endl;
    return 0;
}
    choice++;
    player1++;
    }
return 0;
   }