//#include <iostream>
//#include <string>
//using namespace std;
//
////Ҫʵ�ֶ�̬�������virtual
////1,�м̳й�ϵ
////2,������д���׵��麯��
//
////���׵�ָ�������   ָ���������---�����������õĻ��´��������� ʵ�ָ���ķ��� ����������� ���ܹؼ�
//// Ҫʵ�ֶ�̬  ���봫����
//
//
//class Animal{
//public:
//	virtual void bark(){
//		cout << "����bark" << endl;
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
////�������brak    
////��ַ��󶨣��ڱ���׶� ��ַ��ȷ������
////�����ִ��è˵����������ַ������ǰ��
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