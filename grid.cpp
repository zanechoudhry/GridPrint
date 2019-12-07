//Zane Choudhry
//grid.cpp
//zchoudhry

#include<iostream>
#include"grid.h"
using namespace std;

Grid::Grid(){
    for (int i = 0; i < ROW; i++) { //for each row fill each column to a space
        for (int j = 0; j < COL; j++) {
            graph[i][j] = ' '; // assigning each row and column to a space
        }
    }
}
void Grid::set(int x, int y,char c){
    if (x >= 0 && y >= 0 && x < COL && y < ROW ) { //making sure the x and y are valid coordinates
        graph[y][x] = c; // set function to assign the specific row and column to the specific character
    }
}
void Grid::print(){
    for (int i = 0; i < ROW; i++) { //for each column to a row print out that whole row
        for (int j = 0; j < COL; j++) {
            cout << graph[i][j];
        }
        cout << endl; //after each row print newline
    }
}
