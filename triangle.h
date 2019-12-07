//Zane Choudhry
//triangle.h
//zchoudhry

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include"grid.h"
#include"shape.h"

class Triangle :public Shape{
public:
    Triangle(int x, int y); // triangle is a fixed size so only the x and y coordinates are accessed through the shape class
    virtual void draw(Grid &grid); // draw method by apssing the grid as reference
};

#endif
