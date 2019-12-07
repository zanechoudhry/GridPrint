//Zane Choudhry
//grid.h
//zchoudhry

#ifndef GRID_H
#define GRID_H

class Grid{
public:
    Grid(); // Grid Constructor
    void set(int x,int y, char c); //set function to put on grid
    void print(); // print out the grid
private:
    const static int COL = 60; // constant amount for the number of columns
    const static int ROW = 24; // constant amount for the number of rows
    char graph[ROW][COL]; // intiailizing a 2D array
};

#endif
