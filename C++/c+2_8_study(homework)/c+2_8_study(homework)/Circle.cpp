#include "Circle.h"
Circle::Circle()
{
	radius = 1;
	cout << "Circle�޲ι��캯��." << endl;
}
//!!!!!!!!!!!!!!!!!!!!1
Circle::Circle(string c, double r) : radius(r), Shape(c)
{
	this->setColor(c);
	cout << "Circle�вι��캯��" << endl;
}
Circle::~Circle()
{
	cout << "Circle��������" << endl;
}
void Circle::setRaduis(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getArea()
{
	return 3.14*radius*radius;
}
void Circle::display()
{
	cout << "[Circle Object] Color=" << getColor() << "Cirlce���=" << getArea() << endl;
}