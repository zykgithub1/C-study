//#include <iostream>
//#include <string>
//using namespace std;
//
//class Cpu{
//public :
//	virtual void calculate() = 0;
//};
//class VedioCard{
//public:
//	virtual void display() = 0;
//};
//class Memory{
//public:
//	virtual void storage() = 0;
//};
//
//class IntelCpu :public Cpu{
//public:
//	virtual void calculate(){
//		cout << "Intel CPU is calculating" << endl;
//	}
//};
//
//class IntelVedioCard :public VedioCard{
//public:
//	virtual void display(){
//		cout << "Intel VedioCard is displaying" << endl;
//	}
//};
//
//class IntelMemory :public Memory{
//public:
//	virtual void storage(){
//		cout << "Intel Memory is saving" << endl;
//	}
//};
//
//class LenovolCpu :public Cpu{
//public:
//	virtual void calculate(){
//		cout << "Lenovo CPU is calculating" << endl;
//	}
//};
//
//class LenovoVedioCard :public VedioCard{
//public:
//	virtual void display(){
//		cout << "Lenovo VedioCard is displaying" << endl;
//	}
//};
//
//class LenovoMemory :public Memory{
//public:
//	virtual void storage(){
//		cout << "Lenovo Memory is saving" << endl;
//	}
//};
//
//
//
//
//
//
//class computer{
//private:
//	Cpu* cpu;
//	VedioCard* vc;
//	Memory* mem;
//
//public:
//	computer(Cpu* &cp,VedioCard* &ved,Memory* &me){
//		cpu = cp;
//		vc = ved;
//		mem = me;
//	}
//	void work(){
//		cpu->calculate();
//		vc->display();
//		mem->storage();
//	}
//	~computer(){
//		if (cpu != NULL){
//			delete cpu;
//			cpu = NULL;
//		}
//		if (vc!= NULL){
//			delete vc;
//			vc = NULL;
//		}
//		if (mem != NULL){
//			delete mem;
//			mem = NULL;
//		}
//	}
//};
//void test(){
//	Cpu *intelcp=new IntelCpu;
//	VedioCard* intelvec = new IntelVedioCard;
//	Memory* intelmem = new IntelMemory;
//	computer* cp1 = new computer(intelcp, intelvec, intelmem);
//	cp1->work();
//	delete cp1;
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}