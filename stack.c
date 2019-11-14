#include<stdio.h>
#include<stdlib.h>
int push(int data);
int pop();
int top=-1,stack[50],size=5;
int push(int data)
{
	if(top==size-1)
		{
			printf("overflow");
			//exit;
		}
	else
		{
			top=top+1;
			stack[top]=data;
		}
};
int pop()
{
	int d=0;
	if(top==-1)
	{
		printf("underflow");
		return 0;
	}
	else
	{
		d=stack[top];
		top--;		
		
	}
return d;
};


void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
};

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
			push(d1);
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
	}
	printf("\n\n");
	}
}




























	
