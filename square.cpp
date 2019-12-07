//Zane Choudhry
//square.cpp
//zchoudhry

#include<iostream>
#include"square.h"
#include"grid.h"
using namespace std;

Square::Square(int x, int y, int size): Shape(x,y){
    m_size = size; // assigning private member variable to the size passed in
}
void Square::draw(Grid &grid){
 
    for (int i = m_y; i < (m_y + m_size); i++) { // the two for loops without the if statement would make a square that has no gaps.
        for (int j = m_x; j < (m_x + m_size); j++) {
            if (j == m_x || i == m_y || j == m_x + m_size - 1 || i == m_y + m_size - 1){ //if statment gets rid of the asterisks in the middle and keeps only the ones on the outside
                grid.set(j,i,'*'); // setting the specific i and j value to '*'
            }
        }
    }
}

