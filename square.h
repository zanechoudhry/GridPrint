//Zane Choudhry
//square.h
//zchoudhry
#ifndef SQUARE_H
#define SQUARE_H
#include"grid.h"
#include "shape.h"

class Square :public Shape{
public:
    Square(int x, int y, int size); // inherits the x and y from shape but has a third parameter size
    virtual void draw(Grid &grid); // draw onto grid by passing it by reference
private:
    int m_size; // private member variable to hold the size of the square
};

#endif
