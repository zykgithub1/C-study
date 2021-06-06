#include "employee.h"

Employee::Employee(int id,string name,int did)
{
	m_ID = id;
	m_name = name;
	m_DeptId = did;
}


void Employee::showInfo(){
	cout << "职工编号：    " << m_ID <<
		"\t职工姓名:" << this->m_name <<
		"\t职工岗位:" << this->getDeptName() <<
		"\t岗位职责:" <<
		"      完成经理赋予的任务"<<endl;
}
string Employee::getDeptName(){
	return "员工";
}

ostream& operator<<(ostream &cout, Employee emp){
	cout << "id->   " << emp.m_ID << "    name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}