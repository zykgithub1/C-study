#include "head.h"


int main(){
	int select = 0;
	Addressbooks abs;
	abs.m_Size = 0;
	while (true){
		show();
		cout << "��������Ĳ���" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			dispaly(&abs);
			break;
		case 3:
			del(&abs);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}
	system("pause");
	return 0;
}