#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/*
前置++  返回引用 
后置返回一个值

*/
class MyInteger{
	friend ostream& operator<<(ostream &out, MyInteger m);
public:
	MyInteger(){
		m_Num = 0;
	}
	MyInteger& operator++(){
		this->m_Num++;
		return *this;
	}
	MyInteger operator++(int){
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream &out, MyInteger m){
	out << m.m_Num;
	return out;
}

void test11(){
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void testAfter(){
	MyInteger tem;
	cout << (tem++)++ << endl;
	cout << tem << endl;
}

int main(){
	testAfter();
	system("pause");
	return 0;
}