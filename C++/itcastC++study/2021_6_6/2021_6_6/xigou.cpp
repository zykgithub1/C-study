//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal{
//public:
//	Animal(){
//		cout << "animal的构造函数" << endl;
//	}
//	~Animal(){
//		cout << "animal的析构函数" << endl;
//	}
//	//virtual ~Animal() = 0;
//	virtual void speak() = 0;
//};
////Animal::~Animal(){
////	cout << "animal被析构" << endl;
////}
//
//class Cat :public Animal{
//public:
//	string* name;
//	Cat(string name){
//		this->name = new string(name);
//		cout << "Cat的构造函数" << endl;
//	}
//    ~Cat(){
//		cout << "Cat的析构函数" << endl;
//		cout << *this->name << "正在被析构<<endl;" << endl;
//		if (name != NULL){
//			delete name;
//			name = NULL;
//		}
//	}
//	void speak(){
//		cout << *this->name<<"的小猫正在叫" << endl;
//	}
//};
//void test(){
//	Cat c1 = "tom";
//	c1.speak();
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}