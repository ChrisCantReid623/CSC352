#include <stdio.h>

void copy(char dest[], char src[]) {
	int i;
	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = 0;
}

/* Alternate Version - pointer incrementing
void copy(char dest[], char src[]) {
	while ( (*dest++ = *src++) ) ;
}
*/

//String copy pro version
void copy(char *d, char *s) {
    while (*d++ = *s++) {
		
	}
}

int main() {
	char destination[200] = "muchlongerstring";
	char source[200] = "hello";

	printf("%s\n", source);
	printf("%s\n", destination);

	copy(destination, source);
	printf("%s\n", source);
	printf("%s\n", destination);
}
