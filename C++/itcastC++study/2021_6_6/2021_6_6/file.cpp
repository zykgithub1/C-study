#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
ofs.write((const char *)&p, sizeof(Person));
ifs.read((char*)&p, sizeof(Person));



1,包含头原件
2，创建流对象
ofstream ofs
3，打开文件
ofs.open("文件路径",打开方式)
4，写数据
ofs<<"写入数据"
5，关闭文件
ofs.close();

||   打开方式：
ios::in  读   
ios::out 写   
ate->初始位置，文件尾  
app->追加  
trunc-> 如果文件存在先删除，在创建 
binary->二进制方式


*/
void test01(){
	ofstream ofs;
	ofs.open("test.txt", ios::app);
	ofs << "hello world\n姓名：\n张三\n性别:\n男"<<endl;
	ofs.close();
}
void test02(){
	//读文件：
	//创建流对象  ifstream
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()){
		cout << "文件打开失败了" << endl;
		return;
	}
	//读文件内容方法一：
	/*char buf[1024] = { 0 };
	while (ifs >> buf){
		cout << buf << endl;
	}
	ifs.close();*/
	//-------------读文件方法二：ifs.getline(Buf地址,读取大小)
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf))){
		cout << buf << endl;
	}*/
	//-------------读文件方法三：getline(ios,string)
	/*string buf;
	while (getline(ifs,buf)){
		cout << buf << endl;
	}*/
	//-------------读文件方法四：一个字符一个字符的读
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
		cout << "打开失败" << endl;
	}
	Person p = { "找流",35 };
	ofs.write((const char *)&p, sizeof(Person));
	ofs.close();
}
void test4Read(){
	ifstream ifs("test.txt", ios::binary | ios::in);
	if (!ifs.is_open()){
		cout << "打开失败" << endl; return;
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