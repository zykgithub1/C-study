#include "employee.h"

Employee::Employee(int id,string name,int did)
{
	m_ID = id;
	m_name = name;
	m_DeptId = did;
}


void Employee::showInfo(){
	cout << "ְ����ţ�    " << m_ID <<
		"\tְ������:" << this->m_name <<
		"\tְ����λ:" << this->getDeptName() <<
		"\t��λְ��:" <<
		"      ��ɾ����������"<<endl;
}
string Employee::getDeptName(){
	return "Ա��";
}

ostream& operator<<(ostream &cout, Employee emp){
	cout << "id->   " << emp.m_ID << "    name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}