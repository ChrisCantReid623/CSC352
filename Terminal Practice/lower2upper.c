#include <stdio.h>

int main() {
	
}

// Arithmetic on char
void lower2upper(char *dest, char *src) {
	char ch;
	while (ch = *src++) {
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - 'a' + 'A';
		}
		*dest++ = ch;
	}
	*dest = 0;
}
