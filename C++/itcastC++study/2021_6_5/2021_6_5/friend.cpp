#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Building{
	
public:
	
	Building(){
		this->BedRoom = "����";
		this->SittingRoom = "����";
	}
	string SittingRoom;
private:
	friend void goodFriend(Building* b);
	string BedRoom;
};

void goodFriend(Building* b){
	cout << "���������ڷ��ʣ�" << b->SittingRoom << endl;
	cout << "���������ڷ��ʣ�" << b->BedRoom << endl;
}



//int main(){
//	Building b;
//	goodFriend(&b);
//	system("pause");
//	return 0;
//}