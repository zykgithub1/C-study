#include "boss.h"


void Boss::showInfo(){
	cout << "ְ����ţ�    " << m_ID <<
		"\tְ������:" << this->m_name <<
		"\tְ����λ:" << this->getDeptName() <<
		"\t��λְ��:" <<
		"      ����˾��������Ȳ�" << endl;
}
string Boss::getDeptName(){
	return string("�ϰ�");
}

ostream& operator<<(ostream &cout, Boss emp){
	cout << "id->   " << emp.m_ID << "    name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}