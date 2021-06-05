//#include <iostream>
//#include <string>
//#include <math.h>
//using namespace std;
///*
//mutable 什么都能改
//*/
//class Person{
//public:
//	//this指针是个指针常量  Person* const p
//	void const modify()const  //->const Person* const p   常量指针常量  什么都不能改
//	{
//		//this->age = 100;   报错
//		this->name = 1000;
//	}
//
//	void show()const {
//
//	}
//	int age;
//	mutable int name;
//};
//
//void test02(){
//	const Person p;
//	p.show(); //常对象只能调用常含数
//}
//
//
////int main(){
////	return 0;
////
////}