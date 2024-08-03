#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    char *str;
    struct node *next;
};

struct node *read_list() {
    char buf[1000];
    struct node head;
    struct node *last;
    head.next = NULL;
    last = &head;
    while (scanf("%s", buf)!= EOF) {
        char *s = malloc(sizeof(buf)+1);
        strcpy(s, buf);
        printf("%s %s\n", buf, s);
        struct node *p = malloc(sizeof(struct node));
        p->str = s;
        p->next = NULL;
        last->next = p;
        last = p;
        printf("%s %s\n", buf, p->str);
    }
    return head.next;
};

int main() {
    struct node *head = read_list();
}

/*
// Linked lists
struct node {
    int val;
    struct node *next;
};

//Iterate thorough
struct node *head;
p = head;
while (p != NULL) {
    //Do work on P here
    p = p-> next;
}

for (p=head.; p != NULL; p = p-> next) {
    // Do work
}
*/