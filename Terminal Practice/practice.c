#include <stdio.h>

int len(char *p)
{
	int i;
	for (i = 0; p[i] != 0; i++)
	{
	}
	return i;

	/* Alternate Version
	int count = 0;
	while ( *(p++) ) count++;
	return count;
	*/
}

// Pointer Arithmetic and Array Indexing EQUIVALENT
void arrayIndexing()
{
	int x[4][5][6]; // delcaring an array
	int *p = &x[0][0][0];
	printf("(x[1][2][3]");
	//&p[45] == p + 45; // Legal C
}

// page 85 of slides
int A[7][3];
// this array has 7 * 3 = 21 memory slots of whatever size integer
// A is the address (&) of the beginning of the array
// C complier implicityly knows the size of an integer
// &A[2][1] = A + (2 * 3) + 1

void pointers()
{
	/*
	int x[10];
	int a = x[-1];
	*(x + -1);
	*/
	//******************
	int x[97]; // Declares an array of 97 integers named 'x'.
	x[0] = 8;  // Assigns the value 8 to the first element of the array 'x'.

	int **p;		// Declares a pointer to a pointer to an integer named 'p'.
	int *q = &x[0]; // Declares a pointer to an integer named 'q' and assigns the address of the first element of 'x' to it.

	p = &q; // Assigns the address of 'q' to the pointer 'p'.

	printf("%d\n", x[0]); // Prints the value of the first element of 'x' (which is 8).
	printf("%d\n", *q);	  // Prints the value pointed to by 'q', which is the first element of 'x' (which is 8).
	printf("%d\n", **p);  // Prints the value pointed to by the pointer pointed to by 'p', which is the first element of 'x' (which is 8).
	printf("%d\n", *p);	  // Prints the value pointed to by 'p', which is the address of 'q' (the address of the first element of 'x').
	printf("%p\n", q);	  // Prints the memory address stored in 'q'.
	printf("%p\n", p);	  // Prints the memory address stored in 'p', which is the address of 'q'.	
}

void swap(int *x, int *y) {
	printf("$d\n", x);
	printf("$d\n", y);
	int tmp; // 3 veriables for swapping
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf("$d\n", x);
	printf("$d\n", y);
}


//Return the first word in a string, return the pointer
char *f (char* s) {
	// Skip all spaces, identify the first letter of the word
	while (*s == ' ') s++;
	char * ret = s;
	// Stop at a space or a 0 (end of string)
	while (*s != ' ' && *s != 0) s++;
	// Insert a 0
	*s = 0;
	return ret;
}

int main()
{
	//char source[200] = "hello";
	//int x = len(source);
	//printf("%d\n", x);
	//arrayIndexing();
	//pointers();
}