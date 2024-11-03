#include <stdio.h>

int main () {
	int a, on = 0, result = 0;
	scanf("%d", &a);
	result = a % 10;
	on = (a % 100) / 10;
	printf("onlik xonali son %d\n", on);
	if (on % 2 == 0) {
		printf("juft son");
	}else {
		printf("juft son emas !");
	}

	return 0;
}
