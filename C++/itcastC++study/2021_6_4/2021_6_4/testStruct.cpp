#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <math.h>

typedef struct {
	
	string name;
	int age;
	string sex;
}hero;

void sort(hero *arr, int len){
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len - i - 1; j++){
			if (arr[j].age>arr[j + 1].age){
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++){
		cout << arr[i].name << " ÄêÁä" << arr[i].age << endl;
	}
}

//int main(){
//	hero arr[5] = {
//		{"Áõ±¸",23,"ÄÐ"},
//		{ "¹ØÓð", 22, "ÄÐ" },
//		{ "ÕÅ·É", 20, "ÄÐ" },
//		{ "ÕÔÔÆ", 21, "ÄÐ" },
//		{ "õõ²õ", 19, "Å®" },
//	};
//	sort(arr,5);
//
//	return 0;
//}