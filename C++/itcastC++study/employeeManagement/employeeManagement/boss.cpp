#include "boss.h"


void Boss::showInfo(){
	cout << "职工编号：    " << m_ID <<
		"\t职工姓名:" << this->m_name <<
		"\t职工岗位:" << this->getDeptName() <<
		"\t岗位职责:" <<
		"      管理公司所有事物，喝茶" << endl;
}
string Boss::getDeptName(){
	return string("老板");
}

ostream& operator<<(ostream &cout, Boss emp){
	cout << "id->   " << emp.m_ID << "    name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}