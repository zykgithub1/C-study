//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal{
//public:
//	Animal(){
//		cout << "animal�Ĺ��캯��" << endl;
//	}
//	~Animal(){
//		cout << "animal����������" << endl;
//	}
//	//virtual ~Animal() = 0;
//	virtual void speak() = 0;
//};
////Animal::~Animal(){
////	cout << "animal������" << endl;
////}
//
//class Cat :public Animal{
//public:
//	string* name;
//	Cat(string name){
//		this->name = new string(name);
//		cout << "Cat�Ĺ��캯��" << endl;
//	}
//    ~Cat(){
//		cout << "Cat����������" << endl;
//		cout << *this->name << "���ڱ�����<<endl;" << endl;
//		if (name != NULL){
//			delete name;
//			name = NULL;
//		}
//	}
//	void speak(){
//		cout << *this->name<<"��Сè���ڽ�" << endl;
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