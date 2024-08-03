#include <stdio.h>

int main () {

	int x[10];
	int *p;

	printf("x[3] == %d\n", x[3]);
	p = &(x[3]);
	*(p+3) = 77;
	printf("x[3] == %d\n", x[6]);
	*(p-1) = 67;
	printf("x[3] == %d\n", x[2]);
}
