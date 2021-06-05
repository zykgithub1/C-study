#include <iostream>
#include <string>
using namespace std;

class Cube{
private:
	int m_L;
	int m_W;
	int m_H;

public:
	Cube(int L,int W,int H){
		m_L = L;
		m_W = W;
		m_H = H;
	}

	bool isSameByclass(Cube &c2){
		if (this->m_L == c2.getL() && this->m_H == c2.getH() && this->m_W == c2.getW()){
			return 1;
		}
		return 0;

	}




	void setLength(int len){
		this->m_L = len;
	}
	void setWidth(int len){
		this->m_W = len;
	}
	void setHeight(int len){
		this->m_H = len;
	}
	int getL(){
		return this->m_L;
	}
	int getH(){
		return this->m_H;
	}
	int getW(){
		return this->m_W;
	}

	int calculateS(){
		return 2 * (m_W*m_L + m_W*m_H + m_H*m_L);
	}
	int calculatesV(){
		return m_W*m_H*m_L;
	}
};

bool isSame(Cube &c1, Cube &c2){
	if (c1.getL() == c1.getL()&&c1.getH() == c2.getH()&&c1.getW() == c2.getW()){
		return 1;
	}
	return 0;
}

//int main(){
//	Cube c1 = Cube(10, 10, 10);
//	Cube c2 = Cube(10, 10, 110);
//	cout << "面积"<<c1.calculateS() << endl;
//	cout <<"体积" <<c1.calculatesV() << endl;
//	if (isSame(c1, c2) == true){
//		cout << "c1==c2" << endl;
//	}
//	else{
//		cout << "c1 != c2" << endl;
//	}
//
//	if (c1.isSameByclass(c2) == true){
//		cout << "成员函数  c1 == c2" << endl;
//	}
//	else{
//		cout << "成员函数  c1 != c2" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
