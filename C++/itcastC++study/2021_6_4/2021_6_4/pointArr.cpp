//#include <iostream>
//using namespace std;
//#include <string>
//#include <ctime>
//#include <math.h>
//
//void sort(int* arr, int len){
//	for (int i = 0; i < len; i++){
//		for (int j = 0; j < len - i - 1; j++){
//			if (arr[j]>arr[j + 1]){
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main(){
//	//int a = 10;
//	//int *p1 = &a;
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int size = sizeof(arr) / sizeof(arr[0]);
//	//int **p = &p1;
//	////什么类型的指针 p++ 加上的是元素的大小
//	//cout << *p << endl;
//	//for (int i = 0; i < size ; i++){
//	//	cout << *(arr + i) << " ";
//	//}
//	int arr[10] = { 10, 5, 8, 7, 1, 4, 3, 2, 9, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "排序前" << " ";
//	for (int i = 0; i < len; i++){
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	sort(arr, len);
//	for (int i = 0; i < len; i++){
//		cout << arr[i] << " ";
//	}
//	return 0;
//}