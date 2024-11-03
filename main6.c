#include <stdio.h>

int main () {

	int a, b, c, d = 0, e = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d = a;
	e = c;
	c = d;
	d = b;
	b = e;
	a = d;
	printf("a ning qiymati %d\n", a);
	printf("b ning qiymati %d\n", b);
	printf("c ning qiymati %d\n", c);

	return 0;
}
