//#include <iostream>
//#include <string>
//using namespace std;
//
//class Base1{
//public:
//	/*Base1(){
//		cout << "base���캯��" << endl;
//		dui = new int(10);
//	}
//	~Base1(){
//		delete dui;
//		cout << "base��������" << endl;
//	}*/
//	void func(){
//		cout << "father Func" << endl;
//	}
//	int A=100;
//	//int *dui;
//protected:int B;
//private:int C;
//};
//
//class son1 :public Base1{
//public:
//	/*son1(){
//		cout << "son���캯��" << endl;
//	}
//	~son1(){
//		cout << "son��������" << endl;
//	}*/
//	void func(){
//		cout << "son func" << endl;
//	}
//	int A = 200;
//	//void func(){
//	//	A = 10;
//	//	B = 20;
//	//	//C = 11;   ������˽��Ȩ�������ò���
//	//}
//public:int c; int* p;
//	   int arr[100];
//
//};
//class son2 :public Base1{
//	void func(){
//		A = 10;
//		B = 20;
//		//C = 11;   ������˽��Ȩ�������ò���
//	}
//};
//void test01(){
//	//Base1 b1;
//	son1 s1;
//	//cout << sizeof(s1) << endl;
//	/*cout << "s1 A" << s1.A << endl;
//	cout << "Base A" << s1.Base1::A << endl;*/
//	s1.Base1::func();
//	//s1.B = 100;  ������ʲ���protect
//}
//
//int main(){
//	test01();
//	system("pause");
//	return 0;
//}