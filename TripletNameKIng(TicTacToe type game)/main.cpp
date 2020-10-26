//
//  main.cpp
//  TripletNameKIng(TicTacToe type game)
//
//  Created by Garvit Chaudhary on 26/10/20.
//
#include <iostream>
#include "TicTacToe.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout<<argv[1]<<endl;
    cout<<argc<<endl;
    char playerAnswer;
    TicTacToe T;
    cout << "Would you like to play Triplet Name King (Tic Tac Toe Type Game)? (Y/N)" << endl;
    cin >> playerAnswer;
    if ( playerAnswer == 'y' || playerAnswer == 'Y' ) {
        T.setPlayerInfo();
        T.displayBoard();
        T.makeMove();
    }
    else
        cout << "Bye!" << endl;
    return 0;
}








