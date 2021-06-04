#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
typedef struct{
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
}Person;

struct Addressbooks{
	Person personArr[MAX];
	int m_Size;
};

void show();
void del(Addressbooks* abs);
void dispaly(Addressbooks* abs);
void addPerson(Addressbooks* abs);
int check(const Addressbooks *abs, string str);