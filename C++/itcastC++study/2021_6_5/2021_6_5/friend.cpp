#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Building{
	
public:
	
	Building(){
		this->BedRoom = "卧室";
		this->SittingRoom = "客厅";
	}
	string SittingRoom;
private:
	friend void goodFriend(Building* b);
	string BedRoom;
};

void goodFriend(Building* b){
	cout << "好朋友正在访问：" << b->SittingRoom << endl;
	cout << "好朋友正在访问：" << b->BedRoom << endl;
}



//int main(){
//	Building b;
//	goodFriend(&b);
//	system("pause");
//	return 0;
//}