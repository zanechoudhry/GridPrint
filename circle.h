//Zane Choudhry
//circle.h
//zchoudhry

#ifndef CIRCLE_H
#define CIRCLE_H
#include"grid.h"
#include"shape.h"

class Circle :public Shape{
public:
    Circle(int x, int y); // inherits x and y from shape class since sized is fixed only two parameters
    virtual void draw(Grid &grid); // draw method using the grid as reference
};

#endif
