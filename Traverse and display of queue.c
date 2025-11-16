#include<stdio.h>
void enqueue(int queue[],int *front,int *rear, int value, int size);
int main()
{
    int size;
    printf("ENTER THE SIZE OF QUEUE = ");
    scanf("%d",&size);
    int queue[size];
    int front=-1,rear=-1,sum=0;
 
    for(int i=1;i<=size;i++)
    {
        sum+=10;
        enqueue(queue,&front,&rear,sum,size);
    }
 
    printf("YOUR QUEUE IS = ");
    for(int i=0;i<=rear;i++)
    {
        printf("%d  ",queue[i]);
    }
}
void enqueue(int queue[],int *front, int *rear, int value, int size)
{
    if(*rear==(size-1))
    {
        printf("QUEUE IS FULL!\n");
    }
    else if(*front==-1 && *rear==-1)
    {
        *front=0;
        *rear=0;
        queue[*rear] = value;
        printf("%d IS ADDED TO QUEUE.\n",value);
    }
    else
    {
        (*rear)++;
        queue[*rear] = value;
        printf("%d IS ADDED TO QUEUE.\n",value);
    }
}
