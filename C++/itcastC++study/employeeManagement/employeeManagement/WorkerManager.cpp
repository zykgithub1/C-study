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
		//cout << "文件不存在" << endl;
		this->m_empNum = 0;
		this->m_empArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else if (ifs.eof()){
		//cout << "文件为空" << endl;
		this->m_empNum = 0;
		this->m_empArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	else{
		int num = this->get_EmpNum();
		/*cout << "职工人数为" <<num<<"人"<< endl;*/
		this->m_empNum= num;
		//开辟空间  把文件中的数据存到数组中
		this->m_empArray = new Worker*[num];
		this->init_Emp();
		/*for (int i = 0; i < num; i++){
			cout << "职工编号" << this->m_empArray[i]->m_ID << "姓名：" <<
				this->m_empArray[i]->m_name << "部门编号:" << this->m_empArray[i]->m_DeptId << endl;
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
	cout << "请输入要添加员工的数量" << endl;
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
			cout << "请输入第 " << i + 1 << "个新职工的编号: " << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << "个新职工的姓名: " << endl;
			cin >> name;

			cout << "请选择职工的岗位   " << endl;
			cout << "1,普通职工  " << endl;
			cout << "2,经理  " << endl;
			cout << "3,老板  " << endl;
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
		cout << "成功添加" << addNum << "名新职工" << endl;
		this->save();
		this->m_FileIsEmpty = false;
	}
	else{
		cout << "输入有误" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::exitSystem(){
	cout << "欢迎下次使用" << endl;
	exit(0);
}

void WorkerManager::show_Menu(){
	cout << "**********************************************"<< endl;
	cout << "*******      欢迎使用职工管理系统    ********" << endl;
	cout << "*******        0-> 退出管理系统      ********" << endl;
	cout << "*******        1-> 添加职工信息      ********" << endl;
	cout << "*******        2-> 显示职工信息      ********" << endl;
	cout << "*******        3-> 删除职工信息      ********" << endl;
	cout << "*******        4-> 修改职工信息      ********" << endl;
	cout << "*******        5-> 查找职工信息      ********" << endl;
	cout << "*******        6-> 按照编号排序      ********" << endl;
	cout << "*******        7-> 清空所有文档      ********" << endl;
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
		cout << "打开失败" << endl;
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
		cout << "文件为空" << endl;
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
	cout << "请输入要删除的人的ID或者姓名" << endl;
	cout << "1,输入姓名" << endl;
	cout << "2,输入Id" << endl;
	int choise = 0;
	cin >> choise;
	if (choise == 1){
		cout << "请输入姓名" << endl;
		string search_name;
		cin >> search_name;

	}
	else if(choise==2){
		cout << "请输入Id" << endl;
		int find_id = 0;
		cin >> find_id;
		int ret = this->isExits(find_id);
		if (ret == -1){
			cout << "此人不存在" << endl;
		}
		else{
			for (int i = ret; i < this->m_empNum; i++){
				this->m_empArray[i] = this->m_empArray[i + 1];
			}
			this->m_empNum--;
			this->save();
			cout << "删除成功" << endl;
			if (this->m_empNum == 0){
				this->m_FileIsEmpty = true;
			}
		}
		system("pause");
		system("cls");
	}
}