#include <stdio.h>

typedef struct point
{
    int x;
    int y;
    char *name;
} Point;

Point p = {3, 4};
Point *q = &p;

(*q).x = 5;
q->x = 5;


// Universal Pointer (void*)
// ((void*)x)     -> means x is NULL (points to nothing)



// Allocating Memory
void *malloc(size_t size) {
    // allocates 'size' bites of memory
    // returns a pointer to the allocated
    // returns NULL on failure
    // size_t is an unsigned integer type
}


// Freeing Memory
//free(void*)
// memory is returned to the system for resuse
// releases memoory allocaed by malloc() and calloc()

struct point *p = malloc(sizeof(struct point));


//Example Concat Strings
char *concat(char *p, char *q) {
    int len = strlen(p) + strlen(q);
    char *val = malloc(len+1); // +! for the null terminator
    strcpy(val, p);
    strcat(val, q);
    return val;
}

