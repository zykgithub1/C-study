#include "Shape.h"

Shape::Shape()
{
	color = "white";
	cout << "Shape�޲ι��캯��." << endl;
}
Shape::Shape(string c)
{
	this->color = c;
	cout << "shape�вι��캯��." << endl;
}
Shape::~Shape()
{
	cout << "shape��������." << endl;
}
string Shape::getColor()
{
	return this->color;
}
void Shape::setColor(string c)
{
	this->color = c;
}
double Shape::getArea()
{
	return 0;
}
void Shape::display()
{
	cout << "[Shape Object]color=" << getColor() <<"���="<<getArea()<<endl;
}