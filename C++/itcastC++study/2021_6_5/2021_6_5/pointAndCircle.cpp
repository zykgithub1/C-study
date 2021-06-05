#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#include "point.h"
#include "Circle.h"




void isInCicle(Circle &c,Point &p){
	double distance = pow(c.getCenter().getX() - p.getX(), 2)+pow(c.getCenter().getY() - p.getY(), 2);
	double rDis = pow(c.getR(), 2);
	if (distance == rDis){
		cout << "点在圆上" << endl;
	}
	else if (distance > rDis){
		cout << "点在园外" << endl;
	}
	else{
		cout << "点在园内" << endl;
	}
}
//
//int main(){
//	Point cirCenter = Point(10, 0);
//	Circle c1 = Circle(10,10, 10);
//	Point p = Point(10, 9);
//	isInCicle(c1, p);
//	system("pause");
//	return 0;
//}