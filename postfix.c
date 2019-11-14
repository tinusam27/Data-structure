#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int push(int data);
int pop();
int top=-1,stack[50],size=5;
void main()
{
	int i=0,x,y,result;
	char string[50];
	printf("enter the string");
	scanf("%s",string);
i=0;
	
while(string[i]!='\0')
	{
		if(isdigit(string[i]))
		{
			printf("inside if");
			push(string[i]-'0');
		}
		else
		{
			y=pop();
			x=pop();
		
		if(string[i]=='+')
			result=x+y;
		else if(string[i]=='-')
			result=x-y;
		else if(string[i]=='*')
			result=x*y;
		else if(string[i]=='/')
			result=x/y;
		else if(string[i]=='^')
			result=pow(x,y);
		else
			{
			printf("invalid exp");
			}			
		push(result);
		}
		i++;
	}
result=pop();
printf("The result is %d",result);
}

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





