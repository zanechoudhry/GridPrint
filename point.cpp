//Zane Choudhry
//point.cpp
//zchoudhry

#include<iostream>
#include"point.h"
#include"grid.h"
using namespace std;

Point :: Point(int x, int y, char c): Shape(x,y){
    m_c = c; // assigning the private data to the one passed in
}
void Point::draw(Grid &grid){
    grid.set(m_x, m_y, m_c);  //setting the x and y cordinates and what character is going to be used for the point.
}
