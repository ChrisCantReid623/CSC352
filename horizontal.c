#include <stdio.h>

int main() {
	int counts[256] = {0};
	
	// Read chars from stdin, count occurenes
	int c;
	while ((c = getchar()) != EOF) {
		counts[(int)c]++;
	}
	
	// Print letters '(a-z): *...(number of occurences)'
	for (char letter = 'a'; letter <= 'z'; letter++) {
		// Print '*' times number of occurences
		printf("%c: ", letter);
		for (int i = 0; i < counts[(int)letter]; i++) {
			printf("*");
		}
		printf("\n");
	}


	// Print digits '(0-9): *... (number of occurences)'
	for (char digit = '0'; digit <= '9'; digit++) {
		// Print '*' times number of occurences
                printf("%c: ", digit);
                for (int i = 0; i < counts[(int)digit]; i++) {
                        printf("*");
                }
                printf("\n");
	}
	return 0;
}
