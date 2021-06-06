#include "manager.h"


void Manager::showInfo(){
	cout << "职工编号：  " << m_ID <<
		"\t职工姓名:" << this->m_name <<
		"\t职工岗位:" << this->getDeptName() <<
		"\t岗位职责:" <<
		"\t完成老板赋予的任务，并且下发任务给普通员工" << endl;
}
string Manager::getDeptName(){
	return string("经理");
}

ostream& operator<<(ostream &cout, Manager emp){
	cout << "id->  " << emp.m_ID << "  name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}