//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//vfptr->虚函数表指针   指向一个虚函数表 vbtable  vftable:(虚函数地址（&animal::speak）)
//
//当子类重写了父类的虚函数    子类的虚函数表 内部会替换成子类的虚函数地址
//&animal::speak被覆盖  变成&Cat::speak   当父类的指针或者引用指向子类对象时就发生多了多态
//Animal &animal=cat   
//
//*/
//
//class Animal{
//public:
//	virtual void bark(){
//		cout << "动物bark" << endl;
//	}
//};
//
//class Cat :public Animal{
//public:
//	void bark(){
//		cout << "Cat bark" << endl;
//	}
//};
//
//class Dog :public Animal{
//public:
//	virtual void bark(){
//		cout << "Dog bark" << endl;
//	}
//};
//
//void doSpeak(Animal &animal){
//	animal.bark();
//}
//void test(){
//	Cat cat;
//	Dog dg;
//	doSpeak(dg);
//	doSpeak(cat);
//}
//int main(){
//	test();
//	cout << "animal\t"<<sizeof(Animal) << endl;
//	cout << "cat\t" << sizeof(Cat) << endl;
//	system("pause");
//	return 0;
//}