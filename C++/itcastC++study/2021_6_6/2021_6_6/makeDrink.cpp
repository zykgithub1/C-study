//#include <iostream>
//#include <string>
//using namespace std;
//
//class absDrink{
//public:
//	virtual void boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourintoCup() = 0;
//	virtual void putSomething() = 0;
//	void makeDrink(){
//		boil();
//		Brew();
//		PourintoCup();
//		putSomething();
//	}
//};
//
//class Coffee :public absDrink{
//public:
//	virtual void boil(){
//		cout << "��ũ��ɽȪ"<<endl;
//	}
//	virtual void Brew(){
//		cout << "���ݿ���" << endl;
//	}
//	virtual void PourintoCup(){
//		cout << "put coffee into cup" << endl;
//	}
//	virtual void putSomething(){
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public absDrink{
//public:
//	virtual void boil(){
//		cout << "������ˮ" << endl;
//	}
//	virtual void Brew(){
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void PourintoCup(){
//		cout << "put��Ҷ into cup" << endl;
//	}
//	virtual void putSomething(){
//		cout << "ɶ������" << endl;
//	}
//};
//
//void doWork(absDrink &drink){
//	drink.makeDrink();
//	delete &drink;
//}
//void doWork(absDrink* drink){
//	drink->makeDrink();
//	delete drink;
//}
//void test(){
//	doWork(*(new Coffee));
//	cout << "--------------------------------" << endl;
//	doWork(new Tea);
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}