#include "RoundRectangle.h"

RoundRectangle::RoundRectangle()
{
	roundRadius = 1;
	cout << "roundRectangle�޲ι���" << endl;
}
RoundRectangle::RoundRectangle(string c, double w, double h, double r) :Rectangle(c, w, h), roundRadius(r)
{

	cout << "roundRectangle�вι��캯��" << endl;
}
RoundRectangle::~RoundRectangle()
{
	cout << "roundRectangle��������" << endl;
}
void RoundRectangle::setRoundRadius(double r)
{
	this->roundRadius = r;
}
void RoundRectangle::display()
{
	cout << "[roundRectangle Object]Color =" << getColor() << "���=" << getArea() << endl;
}
double RoundRectangle::getArea()
{
	return getWidth()*getHeight() - 0.86*roundRadius*roundRadius;
}
