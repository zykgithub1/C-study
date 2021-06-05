#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle{
private:
	int m_R;
	int x, y;
	Point center;
public:
	Circle(int x,int y, int R);
	void setR(int r);
	int getR();
	void setCenter(int x,int y);
	Point getCenter();
};