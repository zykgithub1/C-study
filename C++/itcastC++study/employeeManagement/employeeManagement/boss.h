#pragma once
#include <iostream>
#include  "Worker.h"
using namespace std;

class Boss :public Worker
{
public:
	Boss(int id, string name, int did){
		this->m_ID = id;
		this->m_name = name;
		this->m_DeptId = did;
	}
	virtual void showInfo();
	virtual string getDeptName();

private:

};
ostream& operator<<(ostream &cout, Boss emp);