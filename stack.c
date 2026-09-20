#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Pushed: %d\n", value);
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow");
        return -1;
    }
    else
    {
        int popped_value = stack[top];
        top--;
        return popped_value;
    }
}

int peek()
{
    if (top == -1)
    {
        printf("Stack empty");
        return -1;
    }
    return stack[top];
}

void display()
{
    if (top == -1)
    {
        printf("Empty");
        return;
    }

    printf("Stack Elements:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("Top element: %d\n", peek());

    printf("Popped = %d\n", pop());

    display();

    return 0;
}