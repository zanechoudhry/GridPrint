//Zane Choudhry
//shape.h
//zchoudhry

#ifndef SHAPES_H
#define SHAPES_H
#include"grid.h"

class Shape{
public:
    Shape(int x, int y); // Shape Constructor
    virtual void draw (Grid &grid) = 0; // pure virtual method
protected:
    int m_x; // protected so the derived classes can access the x and y coordinates
    int m_y;// protected so the derived classes can access the x and y coordinates
    
    
};


#endif
