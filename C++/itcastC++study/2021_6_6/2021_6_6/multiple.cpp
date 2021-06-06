//#include <iostream>
//#include <string>
//using namespace std;
//
////要实现多态，基类加virtual
////1,有继承关系
////2,子类重写父亲的虚函数
//
////父亲的指针或引用   指向子类对象---》》不是引用的话会拷贝基类对象 实现父类的方法 而不是子类的 这点很关键
//// 要实现多态  必须传引用
//
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
//	void bark(){
//		cout << "Dog bark" << endl;
//	}
//};
//
//
////输出动物brak    
////地址早绑定，在编译阶段 地址就确定好了
////如果想执行猫说话，函数地址不能提前绑定
//void doSpeak(Animal &animal){
//	animal.bark();
//}
//void test(){
//	Cat cat;
//	Dog dg;
//	doSpeak(dg);
//	doSpeak(cat);
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}