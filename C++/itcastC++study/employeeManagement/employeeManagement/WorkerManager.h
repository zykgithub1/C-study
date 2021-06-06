#pragma once
#include <string>
#include <iostream>
#include "Worker.h"
using namespace std;

class WorkerManager
{
public:
	int m_empNum;
	Worker** m_empArray;
	void add_Emp();
	WorkerManager();
	~WorkerManager();
	void save();
	int get_EmpNum();
	bool m_FileIsEmpty;
	void exitSystem();
	void show_Menu();
	void init_Emp();
	void show_Emp();
	void del_Emp();
	int isExits(int target);

private:
};





