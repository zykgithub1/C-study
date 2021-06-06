#pragma once
#include<iostream>
#include<string>
#include "Worker.h"
using namespace std;

class Employee:public Worker
{
public:
	Employee(int id,string name,int Did);
	//~Employee();

	

	virtual void showInfo();
	virtual string getDeptName();

private:

};
ostream& operator<<(ostream &cout, Employee emp);
