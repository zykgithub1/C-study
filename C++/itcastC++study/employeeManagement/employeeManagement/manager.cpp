#include "manager.h"


void Manager::showInfo(){
	cout << "ְ����ţ�  " << m_ID <<
		"\tְ������:" << this->m_name <<
		"\tְ����λ:" << this->getDeptName() <<
		"\t��λְ��:" <<
		"\t����ϰ帳������񣬲����·��������ͨԱ��" << endl;
}
string Manager::getDeptName(){
	return string("����");
}

ostream& operator<<(ostream &cout, Manager emp){
	cout << "id->  " << emp.m_ID << "  name->     " << emp.m_name << "   DeptId->     " << emp.m_DeptId << "    ";
	return cout;
}