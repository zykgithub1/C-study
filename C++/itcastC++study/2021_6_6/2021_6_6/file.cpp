#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
ofs.write((const char *)&p, sizeof(Person));
ifs.read((char*)&p, sizeof(Person));



1,����ͷԭ��
2������������
ofstream ofs
3�����ļ�
ofs.open("�ļ�·��",�򿪷�ʽ)
4��д����
ofs<<"д������"
5���ر��ļ�
ofs.close();

||   �򿪷�ʽ��
ios::in  ��   
ios::out д   
ate->��ʼλ�ã��ļ�β  
app->׷��  
trunc-> ����ļ�������ɾ�����ڴ��� 
binary->�����Ʒ�ʽ


*/
void test01(){
	ofstream ofs;
	ofs.open("test.txt", ios::app);
	ofs << "hello world\n������\n����\n�Ա�:\n��"<<endl;
	ofs.close();
}
void test02(){
	//���ļ���
	//����������  ifstream
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()){
		cout << "�ļ���ʧ����" << endl;
		return;
	}
	//���ļ����ݷ���һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf){
		cout << buf << endl;
	}
	ifs.close();*/
	//-------------���ļ���������ifs.getline(Buf��ַ,��ȡ��С)
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf))){
		cout << buf << endl;
	}*/
	//-------------���ļ���������getline(ios,string)
	/*string buf;
	while (getline(ifs,buf)){
		cout << buf << endl;
	}*/
	//-------------���ļ������ģ�һ���ַ�һ���ַ��Ķ�
	/*char c;
	while ((c = ifs.get())!=EOF){
		cout << c;
	}*/
}
class Person{
public:
	char name[64];
	int age;
};

void test3(){
	ofstream ofs;
	ofs.open("test.txt", ios::app|ios::binary);
	if (!ofs.is_open()){
		cout << "��ʧ��" << endl;
	}
	Person p = { "����",35 };
	ofs.write((const char *)&p, sizeof(Person));
	ofs.close();
}
void test4Read(){
	ifstream ifs("test.txt", ios::binary | ios::in);
	if (!ifs.is_open()){
		cout << "��ʧ��" << endl; return;
	}
	Person p;
	while (ifs.read((char*)&p, sizeof(Person))){
		cout << p.name << " " << p.age << endl;
	}
	ifs.close();
}

int main(){
	test3();
	test4Read();
	system("pause");
	return 0;
}