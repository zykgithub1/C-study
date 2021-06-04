#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <math.h>

struct stu{
	int age;
	char name[10];
	char ame[10];
	char nmame[117];
	int agee;
};
//int main(){
//	int a = 10;
//	int *p = &a;
//	//常量指针
//	//指针指向的值不能修改
//	//指针的指向可以修改
//	const int *pp = &a;
//	int b = 100;
//    pp = &b;
//	//指针常量
//	//指针指向不能修改
//	//指针指向的值可以修改
//	int* const ppp = &a;
//	*ppp = 100;
//
//	const int * const p = &a;
//	int size = sizeof(stu);
//	cout << (p == (&a+1)) << endl;
//	cout << size << endl;
//	return 0;
//}