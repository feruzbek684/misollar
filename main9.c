#include <stdio.h>

int main () {

	int a, b, c, toq = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a % 2 != 0 ) {
		toq ++;
	}if (b % 2 != 0) {
		toq ++;
	} if(c % 2 != 0){
		toq ++;
	}
		printf("toq sonlar bor %d", toq);


	return 0;
}
