#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue underflow");
        return -1;
    }
    else
    {
        int deleted_value = queue[front];
        front++;
        return deleted_value;
    }
}

int peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue empty");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Empty");
        return;
    }
    
    printf("Queue Elements:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d", queue[i]);
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Front element: %d\n", peek());

    printf("Deleted = %d\n", dequeue());

    display();

    return 0;
}