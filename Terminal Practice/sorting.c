int descending(int x, int y) {
    return y - x;
}

int descending(int x, int y) {
    return x - y;
}

//...



//Object- Oriented

struct point
{
    int x;
    int y;
    void (*point) (struct point *self);
};


/*
Postfix notation implies a stack of values

Read the expression from left to right:

Postfix evlauation Example:
3 4 5 * +

   +
 /   \
3     *
     / \
    4   5


1) put 3 on the stack: [3]
2) put 4 on the stack: [3, 4]
3) put 5 on the stack: [3, 4, 5]
4) * operator is next: [3, 4, 5, *] 
    - pop 4 and 5, apply *: 20
    - put 20 back onthe stack
5) stack is [3, 20]
6) + operator is next: [3, 20, +]
    - apply operator: 20 + 3
    - return 23

*/

/*
Building trees (postfix) using Unions & stacks
3 4 5 * +


Operands
1) put node(3) on a stack: [3]
2) put node(4) on a stack: [3, 4]
3) put node(5) on a stack: [3,4,5]

Operators (binary operators: pop off two operands from the stack to evaluate)
4) pop 5, set it as right
5) pop 4, set it as left
6) create node(*), set its children to ()->right = node(5), ()->left = node(4)
7) push evaluation onto stack [3, 20]
... (repeat steps above)


*/

/*
Printing minimal parentheses

- if the Parent of an operator is another operator, print with parentheses
- left child vs right child

*/