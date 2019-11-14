#include<stdio.h>
int top= [5],stack[10],size=6,boundary=[5],d;
void push(int i ,int data)
{
	if top[i]==boundary[i+1]
		printf("overflow");
	else
		stack(++top[i])=data;
}

int pop(int i)
{
	if(top[i]==boundary[i])
		printf("underflow");
	else
		{
			d=stack(top[i]);
			top[i]--;
			printf("the popped element is %d",d);
		}
	return d;
}


void main()
{
	int choice,d1,i,n=3,m;
	top[0]=boundary[0]=-1;
	for(i=1,i<=n,i++)
	{
		top[1]=boundary[1]=(size-1)/n*i;
	}
	while(1)
	{
	printf("enter the choice: 1.push 2.pop ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter i and data ");
			scanf("%d%d",&n,&d1);
			push(n,d1);
			break;
		case 2:printf("enter i to pop");
			scanf("%d",&m);
			pop(m);
			break;
		
	}
	printf("\n\n");
	}
}                                                                                                                                              
