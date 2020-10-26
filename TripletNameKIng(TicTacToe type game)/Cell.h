//
//  Cell.h
//  TripletNameKIng(TicTacToe type game)
//
//  Created by Garvit Chaudhary on 26/10/20.
//
#ifndef Cell_h
#define Cell_h
#include <iostream>
using namespace std;
class Cell {
public:
    Cell();
    void setMark(int);
    int getMark();
private:
    int mark;
};
Cell::Cell() {
    mark = -2;
}
void Cell::setMark( int indexValue) {
    mark = indexValue;
}
int Cell::getMark() {
    return(mark);
}
#endif /* Cell_h */
