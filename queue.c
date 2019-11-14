#include<stdio.h>
#include<stdlib.h>
int enqueue(int data);
int dequeue();
int rear=-1,front=-1,queue[50],size=5;
int enqueue(int data)
{
	if(rear==size-1)
	{
		printf("overflow");
		//exit(0);
	}
	else
	{
		if(rear==-1)
		{
			front=0;
		}
queue[++rear]=data;
	}
};
int dequeue()
{
	int d;
	if(front==-1)
	{
		printf("underflow");
		
	}
	else
	{
		d=queue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
	return d;
};

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}
void main()
{
	int choice,d1;
	while(1)
	{
	printf("enter the choice: 1.push 2.pop 3.display");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter the data to insert\n");
			scanf("%d",&d1);
			enqueue(d1);
			break;
		case 2:dequeue();
			break;
		case 3:display();
			break;
	}
	printf("\n\n");
	}
}




