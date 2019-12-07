//Zane Choudhry
//triangle.cpp
//zchoudhry

#include<iostream>
#include"triangle.h"
#include"grid.h"
using namespace std;

Triangle::Triangle(int x, int y): Shape(x,y) {
    
}
void Triangle::draw(Grid &grid){
    //setting each point of the triangle on the grid individually
    grid.set(m_x+2,m_y,'+');
    grid.set(m_x+1,m_y+1,'+');
    grid.set(m_x+3,m_y+1,'+');
    grid.set(m_x,m_y+2,'+');
    grid.set(m_x+1,m_y+2,'+');
    grid.set(m_x+2,m_y+2,'+');
    grid.set(m_x+3,m_y+2,'+');
    grid.set(m_x+4,m_y+2,'+');
    
}
