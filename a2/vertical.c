#include <stdio.h>

int main() {
    int counts[26] = {0};

    // Read chars from stdin, count occurrences
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }

    // find max occurrence
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > max) {
            max = counts[i];
        }
    }

    // print vertical stars
    for (int row = max; row > 0; row--) {
        for (int i = 0; i < 26; i++) {
            if (counts[i] >= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Print letters
    for (int i = 0; i < 26; i++) {
        printf("%c", 'a' + i);
    }
    printf("\n");
    return 0;
}
