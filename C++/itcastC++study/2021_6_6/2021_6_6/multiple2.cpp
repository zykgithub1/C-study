//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//vfptr->�麯����ָ��   ָ��һ���麯���� vbtable  vftable:(�麯����ַ��&animal::speak��)
//
//��������д�˸�����麯��    ������麯���� �ڲ����滻��������麯����ַ
//&animal::speak������  ���&Cat::speak   �������ָ���������ָ���������ʱ�ͷ������˶�̬
//Animal &animal=cat   
//
//*/
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