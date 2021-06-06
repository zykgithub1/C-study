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
//		cout << "ÉÕÅ©·òÉ½Èª"<<endl;
//	}
//	virtual void Brew(){
//		cout << "³åÅÝ¿§·È" << endl;
//	}
//	virtual void PourintoCup(){
//		cout << "put coffee into cup" << endl;
//	}
//	virtual void putSomething(){
//		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
//	}
//};
//
//class Tea :public absDrink{
//public:
//	virtual void boil(){
//		cout << "ÉÕ×ÔÀ´Ë®" << endl;
//	}
//	virtual void Brew(){
//		cout << "³åÅÝ²èÒ¶" << endl;
//	}
//	virtual void PourintoCup(){
//		cout << "put²èÒ¶ into cup" << endl;
//	}
//	virtual void putSomething(){
//		cout << "É¶¶¼²»¼Ó" << endl;
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