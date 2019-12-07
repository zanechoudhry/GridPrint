//Zane Choudhry
//point.h
//zchoudhry

#ifndef POINT_H
#define POINT_H
#include"grid.h"
#include"shape.h"

class Point :public Shape{
public:
    Point(int x, int y, char c); //inherits the x and y from Shape but has a extra parameter which is character
    virtual void draw(Grid &grid); // draw method using grid as reference
private:
    int m_c; // private member variable to hold the character thats passed in
};

#endif
