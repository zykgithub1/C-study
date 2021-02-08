#include "Rectangle.h"


Rectangle::Rectangle()
{
	width = height = 1;
	cout << "Rectangle�޲ι��캯��" << endl;
}
Rectangle::Rectangle(string c, double w, double h) :Shape(c)
{
    this->width = w;
	this->height = h;
	cout << "Rectangle���вι��캯��" << endl;
}
Rectangle::~Rectangle()
{
	cout << "Rectangle����������" << endl;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
void Rectangle::setHeight(double h)
{
	height = h;
}
double Rectangle::getWidth()
{
	return this->width;
}
double Rectangle::getHeight()
{
	return this->height;
}
double Rectangle::getArea()
{
	return width*height;
}
void Rectangle::display()
{
	cout << "[Rectangle Object]Color=" << getColor() << "���Ϊ��" << getArea() << endl;
}