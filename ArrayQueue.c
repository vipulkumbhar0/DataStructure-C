#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

int arr[MAXSIZE];
int front  = 0;
int rear   = 0;

int isQueueEmpty()
{
   if(front == rear)
       return 1;
   return -1;
}

int dequeue()
{
   if(isQueueEmpty() == 1)
       printf("Queue is Empty.\n");
   else
   {
       return arr[front];
       front++;
   }
}

void dequeuePrint()
{
   if(isQueueEmpty() == 1)
       return;
   else
   {
       printf("Dequeued element = %d\n",arr[front]);
       front++;
   }
}

int isQueueFull()
{
   if(rear == MAXSIZE)
       return 1;
   return -1;
}

void enqueue(int val)
{
   if(isQueueFull() == 1)
       printf("Queue is Full\n");
   else
   {
       arr[rear] = val;
       rear++;
   }
}

void main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
}