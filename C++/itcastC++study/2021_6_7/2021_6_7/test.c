
#include <stdio.h>

//int main(){
//	char *p =(char *) "QAQ";
//	int a = 127;
//	int i = 0, j = 0, k = 0;
//	for (i = 0; i < 10000; i++){
//		for (j = 0; j <=100; j++){
//			for (k = 0; k <= 100; k++){
//				if (i + 100 == j*j&&i + 168 == k*k){
//					printf("´ËÊýÊÇ%d\n", i);
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main(){
//	int i, j;
//	for (i = 1; i <= 8; i++){
//		if (i % 2 != 0){
//			for (j = 1; j <= 4; j++){
//				printf("%c%c", 168, 128);
//				printf("  ");
//			}
//		}
//		else{
//			for (j = 1; j <= 4; j++){
//				printf("  ");
//				printf("%c%c", 168, 128);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main(){
	char ch;
	while ((ch = getchar())!=EOF){
		putchar(ch);
		printf("%c ", ch);
	}
	return 0;
}