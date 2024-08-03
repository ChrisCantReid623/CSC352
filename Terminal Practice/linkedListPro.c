#include <setjmp.h>
#include <stdio.h>

int main()
{
    printf("hello\n");
}

typedef struct Node
{
    int value;
    Node *next;
} Node;

// Technique handles special cases (NULL case)
Node *append(Node *head, Node *p)
{
    // Phony Node BEFORE Head (list has a least 1 node)
    Node phony;
    phony.next = head;

    Node *cur = &phony;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = p;
    return phony.next;
}

Node *inorder(Node *head, Node *p)
{
    if (head == NULL)
    {
        return p;
    }
    if (p->value < head->value)
    {
        p->next = head;
        return p;
    }
    head->next = inorder(head->next, p);
    return head;
}

Node *delete(Node *head, int value)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->value == value)
    {
        free(head);
        return delete (head->next, value);
    }
    head->next = delete (head->next, value);
    return head;
}

// Revised Pro Version
Node *delete(Node *head, int value)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->value != value)
    {
        head->next = delete (head->next, value);
        return head;
    }
    Node *ret = delete(head->next, value);
    free(head);
    return ret;
}

// BCD Digit Compare Pro Version
typedef struct digit
{
    int digit;
    struct digit *next;
} Digit;

int compare(Digit *x, Digit *y)
{
    if (x == NULL && y == NULL)
    {
        return 0;
    }
    if (x == NULL)
    {
        return -1;
    }
    if (y == NULL)
    {
        return 1;
    }
    int cmp = compare(x->next, y->next);
    if (cmp != 0)
    {
        return cmp;
    }
    return x->digit - y->digit;
}

// Similar to Java Exception Handling
// setjmp, longjmp, jmp_buf - unroll stack frames like exception handling

// setjmp() - "this is the target of a non-local control", always returns 0

// longjmp() - takes information from setjmp, executes jump, goes to setjmp code BUT returns a value OTHER THAN 0

void foo()
{
    jmp_buf env;
    int val;
    if ((val = setjmp(env)) == 0)
    {
        printf("etjmp returned 0\n");
    }
    else
    {
        printf("longjmp provided %d\n", val);
        return;
    }

    longjmp(env, 17);
}

// Linked List BCD addition

// BCD -> 3 -> 2 -> 4
// BCD -> 6 -> 8

// carry over
// ghost zero
// result longer than operands
