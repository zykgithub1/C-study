#include "head.h"

void show(){
	cout << "***********************" << endl;
	cout << "***  1,�����ϵ��   ***" << endl;
	cout << "***  2,��ʾ��ϵ��   ***" << endl;
	cout << "***  3,ɾ����ϵ��   ***" << endl;
	cout << "***  4,������ϵ��   ***" << endl;
	cout << "***  5,�޸���ϵ��   ***" << endl;
	cout << "***  6,�����ϵ��   ***" << endl;
	cout << "***  0,�Ƴ�ͨѶ¼   ***" << endl;
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
		cout << "ͨѶ¼����" << endl;
		return;
	}
	cout << "����������" << endl;
	string name;
	while (true){
		cin >> name;
		if (check(abs, name) == -1){
			abs->personArr[abs->m_Size].m_Name = name;
			break;
		}
		cout << "����ϵ���Ѵ��ڣ���������" << endl;
	}
	
	cout << "�������Ա�" << endl;
	cout << "1--��" << endl;
	cout << "2--Ů" << endl;
	int sex = 0;
	cin >> sex;
	while (sex != 1 && sex != 2){
		cout << "�����Ա�������������" << endl;
		cin >> sex;
	}
	abs->personArr[abs->m_Size].m_Sex = (sex == 1 ? "��" : "Ů");
	cout << "����������" << endl;
	int age=0;
	while (true){
		cin >> age;
		if (age >= 1 && age < 30){
			abs->personArr[abs->m_Size].m_Age = age;
			break;
		}
	}
	cout << "��������ϰ�绰" << endl;
	string phone;
	cin >> phone;
	abs->personArr[abs->m_Size].m_Phone = phone;
	cout << "�������ͥסַ" << endl;
	string addr;
	cin >> addr;
	abs->personArr[abs->m_Size].m_Addr = addr;
	abs->m_Size++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}

void del(Addressbooks* abs){
	if (abs->m_Size == 0){
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	cout << "������Ҫ�������ϵ�˵�����" << endl;
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
			cout << "ɾ���ɹ�" << endl;
			break;
		}
		cout << "���������ڣ�����������Ҫɾ����" << endl;
	}

}

void dispaly(Addressbooks* abs){
	if (abs->m_Size == 0){
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	for (int i = 0; i < abs->m_Size; i++){
		cout << "������  " << abs->personArr[i].m_Name <<"\t";
		cout << "�Ա�  " << abs->personArr[i].m_Sex << "\t";
		cout << "���䣺  " << abs->personArr[i].m_Age << "\t";
		cout << "�绰��  " << abs->personArr[i].m_Phone << "\t";
		cout << "סַ��  " << abs->personArr[i].m_Addr<< endl;
	}
	system("pause");
	system("cls");
}