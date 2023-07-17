# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# define MAX_SIZE 50

typedef struct Stack
{
    int items [MAX_SIZE];
    int top;

}Stack;

void init (Stack *stack)
{
    stack->top = -1;
}

bool isFull(Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

bool isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int item) 
{
    if (isFull(stack))
    {
        printf("stack is full");
        return;
    };
    stack->items[++stack->top] = item;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("stack is Empty");
        return -1;
    };
   return stack->items[stack->top--];
}

void display(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("stack is Empty");
        return;
    }
    for (int i = stack->top; i >= 0; --i)
    {
        printf("%d - ",stack->items[i]);
    }

    printf("\n");
}
int main () 
{
    Stack myStack;
    init(&myStack);
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
    push(&myStack, 50);

    display(&myStack);

    printf("pop is %d \n", pop(&myStack));

    display(&myStack);
    return 0;
}