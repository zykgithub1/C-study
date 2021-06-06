#include "WorkerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

WorkerManager::WorkerManager()
{
	char ch;
	
	ifstream ifs(FILENAME, ios::in | ios::binary);
	ifs >> ch;
	if (!ifs.is_open()){
		//cout << "�ļ�������" << endl;
		this->m_empNum = 0;
		this->m_empArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else if (ifs.eof()){
		//cout << "�ļ�Ϊ��" << endl;
		this->m_empNum = 0;
		this->m_empArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else{
		int num = this->get_EmpNum();
		/*cout << "ְ������Ϊ" <<num<<"��"<< endl;*/
		this->m_empNum= num;
		//���ٿռ�  ���ļ��е����ݴ浽������
		this->m_empArray = new Worker*[num];
		this->init_Emp();
		/*for (int i = 0; i < num; i++){
			cout << "ְ�����" << this->m_empArray[i]->m_ID << "������" <<
				this->m_empArray[i]->m_name << "���ű��:" << this->m_empArray[i]->m_DeptId << endl;
		}*/
	}
}

WorkerManager::~WorkerManager()
{
	if (this->m_empArray != NULL){
		delete[] this->m_empArray;
		this->m_empArray = NULL;
	}
}

void WorkerManager::add_Emp(){
	cout << "������Ҫ���Ա��������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0){
		int newSize = this->m_empNum + addNum;
		Worker** newSpace=new Worker*[newSize];
		if (this->m_empArray != NULL){
			for (int i = 0; i < this->m_empNum; i++){
				newSpace[i] = this->m_empArray[i];
			}
		}
		for (int i = 0; i < addNum; i++){
			int id;
			string name;
			int DpetId;
			cout << "������� " << i + 1 << "����ְ���ı��: " << endl;
			cin >> id;
			cout << "������� " << i + 1 << "����ְ��������: " << endl;
			cin >> name;

			cout << "��ѡ��ְ���ĸ�λ   " << endl;
			cout << "1,��ְͨ��  " << endl;
			cout << "2,����  " << endl;
			cout << "3,�ϰ�  " << endl;
			cin >> DpetId;

			Worker* worker = NULL;
			switch (DpetId)
			{
			case 1:
				worker = new Employee(id, name, DpetId);
				break;
			case 2:
				worker = new Manager(id, name, DpetId);
				break;
			case 3:
				worker = new Boss(id, name, DpetId);
				break;
			}
			newSpace[i + this->m_empNum] = worker;
		}
		delete[]this->m_empArray;
		this->m_empArray = newSpace;
		this->m_empNum = newSize;
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		this->save();
		this->m_FileIsEmpty = false;
	}
	else{
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::exitSystem(){
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);
}

void WorkerManager::show_Menu(){
	cout << "**********************************************"<< endl;
	cout << "*******      ��ӭʹ��ְ������ϵͳ    ********" << endl;
	cout << "*******        0-> �˳�����ϵͳ      ********" << endl;
	cout << "*******        1-> ���ְ����Ϣ      ********" << endl;
	cout << "*******        2-> ��ʾְ����Ϣ      ********" << endl;
	cout << "*******        3-> ɾ��ְ����Ϣ      ********" << endl;
	cout << "*******        4-> �޸�ְ����Ϣ      ********" << endl;
	cout << "*******        5-> ����ְ����Ϣ      ********" << endl;
	cout << "*******        6-> ���ձ������      ********" << endl;
	cout << "*******        7-> ��������ĵ�      ********" << endl;
	cout << "**********************************************" << endl;
}

int WorkerManager::get_EmpNum(){
	ifstream ifs(FILENAME, ios::in);
	int id; string name; int did;
	int num = 0;
	while (ifs >> id&&ifs >> name&&ifs >> did){
		num++;
	}
	ifs.close();
	return num;
}
void WorkerManager::save(){
	ofstream ofs(FILENAME, ios::out|ios::binary);
	if (!ofs.is_open()){
		cout << "��ʧ��" << endl;
		return;
	}
	/*for (int i = 0; i < this->m_empNum; i++){
		ofs.write((const char *)this->m_empArray[i], sizeof(Worker));
	}*/
	for (int i = 0; i < this->m_empNum; i++){
		ofs << this->m_empArray[i]->m_ID << " "
			<< this->m_empArray[i]->m_name << " " <<
			this->m_empArray[i]->m_DeptId << endl;
	}
	ofs.close();
	
}

void WorkerManager::init_Emp(){
	ifstream ifs(FILENAME, ios::in);
	int id; string name; int DeptID;
	int num = this->get_EmpNum();
	int index = 0;
	while (ifs >> id&&ifs >> name&&ifs >> DeptID){
		Worker* worker = NULL;
		if (DeptID == 1){
			worker = new Employee(id, name, DeptID);
		}
		else if(DeptID==2){
			worker = new Manager(id, name, DeptID);
		}
		else{
			worker = new Boss(id, name, DeptID);
		}
		this->m_empArray[index++] = worker;
	}
	ifs.close();
}

void WorkerManager::show_Emp(){
	if (this->m_FileIsEmpty){
		cout << "�ļ�Ϊ��" << endl;
	}
	else{
		for (int i = 0; i < this->m_empNum; i++){
			this->m_empArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::isExits(int target){
	int index = -1;
	for (int i = 0; i < this->m_empNum; i++){
		if (this->m_empArray[i]->m_ID == target){
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::del_Emp(){
	cout << "������Ҫɾ�����˵�ID��������" << endl;
	cout << "1,��������" << endl;
	cout << "2,����Id" << endl;
	int choise = 0;
	cin >> choise;
	if (choise == 1){
		cout << "����������" << endl;
		string search_name;
		cin >> search_name;

	}
	else if(choise==2){
		cout << "������Id" << endl;
		int find_id = 0;
		cin >> find_id;
		int ret = this->isExits(find_id);
		if (ret == -1){
			cout << "���˲�����" << endl;
		}
		else{
			for (int i = ret; i < this->m_empNum; i++){
				this->m_empArray[i] = this->m_empArray[i + 1];
			}
			this->m_empNum--;
			this->save();
			cout << "ɾ���ɹ�" << endl;
			if (this->m_empNum == 0){
				this->m_FileIsEmpty = true;
			}
		}
		system("pause");
		system("cls");
	}
}