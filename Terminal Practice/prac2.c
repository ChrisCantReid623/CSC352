#include <stdio.h> 

int main() {
	int x;
	int *p;
	
	x = 5;
	printf("x == %d\n", x);
	p = &x;
	printf("p == %p\n", p);
	printf("x address = %p\n", &x);

	*p = 7;
	printf("Value of thing pointed to by p = %d\n", *p);
	printf("p == %p\n", p);
	printf("x == %d\n", x);
	printf("p address = %p\n", &p);
	
}
