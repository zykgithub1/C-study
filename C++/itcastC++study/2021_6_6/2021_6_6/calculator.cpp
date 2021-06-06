//#include <iostream>
//#include <string>
//using namespace std;
//
///*
//*/
//
//
//class abstractCalculator{
//public:
//	virtual int getResult(){
//		return 0;
//	}
//	int A, B;
//};
//
//
//class Calculator
//{
//public:
//	int A,B;
//	
//	int getResult(string oper){
//		if (oper == "+"){
//			return A + B;
//		}
//		else if (oper == "-"){
//			return A - B;
//		}
//		else if (oper == "*"){
//			return A * B;
//		}
//		else if (oper == "/"){
//			return A / B;
//		}
//		else{
//			return -1;
//		}
//	}
//
//
//	Calculator(int a,int b);
//
//private:
//
//};
//
//Calculator::Calculator(int a,int b)
//{
//	A = a;
//	B = b;
//}
//
//void test(int num){
//	_ASSERT(num != 0);
//	Calculator c(10,10);
//	int a=c.getResult("+");
//	cout << c.getResult("+") << endl;
//	cout << c.getResult("-") << endl;
//	cout << c.getResult("*") << endl;
//	cout << c.getResult("/") << endl;
//}
//
//int main(){
//	test(0);
//	system("pause");
//	return 0;
//}