#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker{
public:
	int m_ID;
	string m_name;
	int m_DeptId;
	virtual void showInfo() = 0;
	virtual string getDeptName() = 0;
};