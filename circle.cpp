//Zane Choudhry
//circle.cpp
//zchoudhry
#include<iostream>
#include"circle.h"
#include"grid.h"
using namespace std;

Circle :: Circle(int x, int y): Shape(x,y){
 
}
void Circle::draw(Grid &grid){
    //setting each point of the circle on the grid individually
    grid.set(m_x+1,m_y,'o');
    grid.set(m_x+2,m_y,'o');
    grid.set(m_x,m_y+1,'o');
    grid.set(m_x+3,m_y+1,'o');
    grid.set(m_x,m_y+2,'o');
    grid.set(m_x+3,m_y+2,'o');
    grid.set(m_x+1,m_y+3,'o');
    grid.set(m_x+2,m_y+3,'o');
}
