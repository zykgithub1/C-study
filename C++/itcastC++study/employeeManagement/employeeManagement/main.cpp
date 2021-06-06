#include  "WorkerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include "Worker.h"


int main(){
	WorkerManager wm;
	cout << sizeof(wm) << endl;
	return 0;

	int choise = 0;
	while (true){
		wm.show_Menu();
		cin >> choise;
		switch (choise)
		{
		case 0:
			wm.exitSystem();
			break;
		case 1:
			wm.add_Emp();
			break;
		case 2:
			wm.show_Emp();
			break;
		case 3:
			wm.del_Emp();

			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}