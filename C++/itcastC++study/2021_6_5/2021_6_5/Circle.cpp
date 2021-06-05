#include "Circle.h"


Circle::Circle(int x,int y, int R) :center(x,y), m_R(R)
{
	
}

void Circle::setR(int r){
	this->m_R = r;
}
int Circle::getR(){
	return m_R;
}
void Circle::setCenter(int x,int y){
	this->center= Point(x, y);
}
Point Circle::getCenter(){
	return this->center;
}