#include <stdio.h>

int main (){

	int son1, son2, son3, yig = 0;
	scanf("%d", &son1);
	scanf("%d", &son2);
	scanf("%d", &son3);
	printf("son ==> %d\n", son1);
	printf("son ==> %d\n", son2);
	printf("son ==> %d\n", son3);
	if (son1 % 2 == 0) {
		yig = son1 + yig;
	}if (son2 % 2 == 0) {
		yig = son2 + yig;
	}if (son3 % 2 == 0) {
		yig = son3 + yig;
	}
	printf("juft sonlar yigindisi %d\n", yig);
	return 0;
}
