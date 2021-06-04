#include "head.h"

void show(){
	cout << "***********************" << endl;
	cout << "***  1,添加联系人   ***" << endl;
	cout << "***  2,显示联系人   ***" << endl;
	cout << "***  3,删除联系人   ***" << endl;
	cout << "***  4,查找联系人   ***" << endl;
	cout << "***  5,修改联系人   ***" << endl;
	cout << "***  6,清空联系人   ***" << endl;
	cout << "***  0,推出通讯录   ***" << endl;
	cout << "***********************" << endl;
}

int check(const Addressbooks *abs, string str){
	for (int i = 0; i < abs->m_Size; i++){
		if (abs->personArr[i].m_Name ==str){
			return i;
		}
	}
	return -1;
}
void addPerson(Addressbooks *abs){
	if (abs->m_Size == MAX){
		cout << "通讯录已满" << endl;
		return;
	}
	cout << "请输入姓名" << endl;
	string name;
	while (true){
		cin >> name;
		if (check(abs, name) == -1){
			abs->personArr[abs->m_Size].m_Name = name;
			break;
		}
		cout << "该联系人已存在，重输姓名" << endl;
	}
	
	cout << "请输入性别" << endl;
	cout << "1--男" << endl;
	cout << "2--女" << endl;
	int sex = 0;
	cin >> sex;
	while (sex != 1 && sex != 2){
		cout << "输入性别有误，重新输入" << endl;
		cin >> sex;
	}
	abs->personArr[abs->m_Size].m_Sex = (sex == 1 ? "男" : "女");
	cout << "请输入年龄" << endl;
	int age=0;
	while (true){
		cin >> age;
		if (age >= 1 && age < 30){
			abs->personArr[abs->m_Size].m_Age = age;
			break;
		}
	}
	cout << "请输入练习电话" << endl;
	string phone;
	cin >> phone;
	abs->personArr[abs->m_Size].m_Phone = phone;
	cout << "请输入家庭住址" << endl;
	string addr;
	cin >> addr;
	abs->personArr[abs->m_Size].m_Addr = addr;
	abs->m_Size++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}

void del(Addressbooks* abs){
	if (abs->m_Size == 0){
		cout << "通讯录为空" << endl;
		return;
	}
	cout << "请输入要输出的联系人的姓名" << endl;
	string name;
	int key = 0;
	while (true){
		cin >> name;
		if (check(abs, name)!=-1){
			key = check(abs, name);
			for (int i = key; i < abs->m_Size; i++){
				abs->personArr[i] = abs->personArr[i + 1];
			}
			abs->m_Size--;
			cout << "删除成功" << endl;
			break;
		}
		cout << "姓名不存在，请重新输入要删的人" << endl;
	}

}

void dispaly(Addressbooks* abs){
	if (abs->m_Size == 0){
		cout << "通讯录为空" << endl;
		return;
	}
	for (int i = 0; i < abs->m_Size; i++){
		cout << "姓名：  " << abs->personArr[i].m_Name <<"\t";
		cout << "性别：  " << abs->personArr[i].m_Sex << "\t";
		cout << "年龄：  " << abs->personArr[i].m_Age << "\t";
		cout << "电话：  " << abs->personArr[i].m_Phone << "\t";
		cout << "住址：  " << abs->personArr[i].m_Addr<< endl;
	}
	system("pause");
	system("cls");
}