#include <iostream>
#include <stdio.h>
using namespace std;
//class Clock{
//private:
//	int hour; int second; int miao;
//
//public:
//	Clock()
//	{
//		this->hour = 1;
//		this->miao = 1;
//		this->second = 1;
//	}
//	Clock(int hour, int second, int miao)
//	{
//		this->hour = hour;
//		this->miao = miao;
//		this->second = second;
//	}
//	void setHour(int hour)
//	{
//		this->hour = hour;
//	}
//	void setSecond(int hour)
//	{
//		this->second = hour;
//	}
//	void setMiao(int hour)
//	{
//		this->miao = hour;
//	}
//	int getHour()
//	{
//		return this->hour;
//	}
//	int getSecond()
//	{
//		return this->second;
//	}
//	int getMiao()
//	{
//		return this->miao;
//	}
//	void display()
//	{
//		cout << hour << ":" << second << ":" << miao << endl;
//	}
//};
//
//int main()
//{
//	Clock myClock1; //������󣬴�ʱ���Զ������޲ι��캯��
//	myClock1.setHour(2);
//
//	cout << "�����޲ι��캯��������ʱ�����Ϊ��";
//
//	myClock1.display();
//
//
//
//	Clock myClock2(8, 3, 30); //�˴����Զ������вι��캯��
//
//	cout << "�����вι��캯��������ʱ�����Ϊ��";
//
//	myClock2.display();
//
//
//
//	myClock2.setHour(21);
//
//	cout << "�޸Ĺ��Ķ����ʱ��Ϊ��";
//
//	myClock2.display();
//
//	return 0;
//}

class Rectangle{
public:
	double width;
	double height;
public:
	Rectangle()
	{
		this->width = 1.0;
		this->height = 1.0;
	}
	Rectangle(double width, double height)
	{
		this->height = height;
		this->width = width;
	}
	void setWidth(double width)
	{
		this->width = width;
	}
	void setHeight(double height)
	{
		this->height = height;
	}
	double getWidth()
	{
		return this->width;
	}
	double getHeight()
	{
		return this->height;
	}
	void getArea()
	{
		printf("%lf\n", height*width);
	}
	void getPerimieter()
	{
		printf("%lf\n", 2*(height+width));
	}
};

int main()
{
	Rectangle r1;
	r1.getPerimieter();
	r1.getArea();
	Rectangle r2(3.14, 1.0);
	r2.getArea();
	r2.getPerimieter();
	Rectangle r3(2,2.5);
	r3.setWidth(3);
	r3.getArea();
	r3.getPerimieter();
	//printf("�вζ�������Ϊ��%lf         �ܳ�Ϊ:%lf\n", r2.getArea, r2.getPerimieter);
	return 0;
}