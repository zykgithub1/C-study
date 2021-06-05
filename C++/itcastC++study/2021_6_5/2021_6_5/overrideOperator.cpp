#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class Person{
	
public :

	int m_A;
	int m_B;
	Person(){

	}

	/*Person operator+(Person &p){
		Person temp;
		temp.m_A = this->m_A+p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

	Person(int a, int b){
		m_A = a;
		m_B = b;
	}
};
Person operator+(const Person &p1,const Person &p2){
	Person ans;
	ans.m_A = p1.m_A + p2.m_A;
	ans.m_B = p1.m_B + p2.m_B;
	return ans;
}



void test01(){
	Person p1(10,10);
	Person p2(10, 10);
	Person p3 = p1 + p2;
	cout << p3.m_A << endl;
	cout << p3.m_B<< endl;
}
ostream& operator<<(ostream &cout,Person p){
	cout << p.m_A << " " << p.m_B;
	return cout;
}
void test02(){
	Person p1(10, 10);
	cout << p1<<endl;
}

//int main(){
//	/*test01();
//	Person p1(1,1);
//	cout << p1.m_A << "  " << p1.m_B << endl;*/
//	test02();
//	system("pause");
//	return 0;
//}