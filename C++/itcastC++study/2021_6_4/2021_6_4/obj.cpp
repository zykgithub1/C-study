#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <math.h>
const double PI = 3.1415;

class circle
{
public:
	int r;
	//���ԣ�
	//��Ϊ��
	//��Ϊ��
	//��ȡԲ���ܳ�

	circle(int r){
		this->r = r;
	}

	double calculateZC(){
		return 2 * PI*r;
	}
};

class student{
public:
	string name;
	int age;
	student(string name, int age){
		int* del = new int(11);
		this->name = name;
		this->age = age;
	}
	void setAge(int age){
		this->age = age;
	}
	void setName(string name){
		this->name = name;
	}

	void showInfo(){
		cout << this->name << this->age << endl;
	}
	

};


//int main(){
//	/*circle c =circle(1);
//	cout << c.calculateZC() << endl;*/
//	student st = student("���俭", 25);
//	st.setAge(26);
//	st.setName("�׿���");
//	st.showInfo();
//
//}