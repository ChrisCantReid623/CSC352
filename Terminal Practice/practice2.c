//
// Memory Management Functions
//

#include <stdio.h>
#include <malloc/_malloc.h>
#include <string.h>

int main() {
    // malloc function allocates space in memory during the program's execution.
    // malloc function does not initialize the space in memory allocated during execution. It carries garbage value.

    // calloc() and malloc() function is similar.
    // But calloc() allocates memory for zero-initializes. However, malloc() does not.

    int *p = malloc(10 * sizeof(int));

    // The realloc() function modifies the allocated memory size to a new size by the malloc() and calloc() functions.
    p = realloc(p, 20 * sizeof(int));


    //The free() function releases the memory allocated by the malloc(), calloc(), realloc() functions.
    //free(*p);
    free(p);
}

void print_words() {
    char buf[1000];
    while (scanf("%s", buf) > 0) {
        printf("word: %s\n", buf);
    }


    // memory allocation and copy
    char hold[1000];
    char *words[1000];
    int i = 0;
    while (scanf("%s", buf) > 0) {
        words[i] = malloc(strlen(buf) + 1);
        strcpy(words[i], buf);
        i++;
    }
}

// Union type in C creates fields that overlap in memory. Declaration looks like structs but all fields overlap the
// same memory
union bar {
    int x;
    int y; // x and y occupy the same memory
    char ch;
}bar;

int function() {
    bar.x = 3;
}