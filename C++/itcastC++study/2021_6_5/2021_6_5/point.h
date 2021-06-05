#pragma once
#include<iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(int x, int y);

	void setX(int x);
	void setY(int y);
	int getX();
	int getY();

};