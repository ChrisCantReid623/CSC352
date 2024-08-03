//
// Created by Christopher Reid on 3/14/24.
//

#include <stdio.h>

union abc
{
    int a;
    char b;
}var;


//OOP

struct values {
    int kind;           // 0 for int, 1 for double
    union {
        int i;          //overlaps with d
        double d;       //overlaps with i
    }u;                 //field name of union
}v;

int main()
{
    var.a = 66;
    printf("\n a = %d", var.a);
    printf("\n b = %d", var.b);

    struct values *p;
    p->u.i = 1;

}


