#include <stdio.h>

int main() {
	int counts[256] = {0};

	// Read chars from stdin, count occurences
	int c;
	while ((c = getchar()) != EOF) {
		counts[(int)c]++;
	}
	
	// Print letters (a-z)
	for (char letter = 'a'; letter <= 'z'; letter++) {
		printf("%c: %d\n", letter, counts[(int)letter]);

	}
	
	// Print digits	
	for (char digit = '0'; digit <= '9'; digit++) {
		printf("%c: %d\n", digit, counts[(int)digit]);
	}

	return 0;
}
