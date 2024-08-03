#include <stdio.h>

// int (*f)(int);

// f is a variable pointing to a function
// right side: integer argument(s)
// left side: return value type
// ---------------------

void hello()
{
    printf("hello\n");
}

int main()
{
    void (*f)(); // same data type, no arguments

    f = hello; // assigns f to function, hello()

    (*f)(); // prints hello
    
    return 0;
}