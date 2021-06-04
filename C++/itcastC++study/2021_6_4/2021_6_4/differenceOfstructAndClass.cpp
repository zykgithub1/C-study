#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <math.h>
const double PI = 3.1415;

//typedef class{
//public:int m_A;
//}C1;
//
//struct C2{
//	int m_A;
//};

//成员私有化的好处：1可以自己控制读写权限
//2，对于写可以检测数据的有效性

class Person{
public:
	void setName(string name){
		this->name = name;
	}
	string getName(){
		return this->name;
	}


private:
	string name;
	int age;
	string lover;
	
};
int main(){
	Person p1;
	p1.setName("zyk");
	cout << p1.getName() << endl;
	return 0;
}