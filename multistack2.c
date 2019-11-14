#include<stdio.h>
#include<stdlib.h>
void push(int i , int data);
int pop(int i);
int size=10;
int stack[10];
int top[5];
int boundary[5];
void main()
{
int j,data,ch,d,i,n;
printf("Enter number of stacks");
scanf("%d",&n);
top[0]=-1,boundary[0]=-1;
for(j=1;j<=n;j++)
{

top[j]=boundary[j]=((size-1)/n)*j;

}                                                                                                                                                                          
//int top[j];
//int boundary[j];
//printf("%d",j);
while(1)
{
printf("\n\nChoices are:\n1.Insertion\n2.Deletion\n");
printf("Enter choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Choice selected for insertion:\n");
printf("Enter data:");
scanf("%d",&data);
printf("Enter the number of stack to which insertion need to take place:");
scanf("%d",&i);
push(i,data);
break;
}
case 2:
{
printf("Choice selected for deletion:\n");
printf("Enter the number of stack to which deletion need to take place:");
scanf("%d",&i);
d=pop(i);
printf("%d is popped",d);
break;
}
}
}
}
void push(int i, int data)
{

if(top[i]==boundary[i+1])
{
printf("Overflow\n");
exit (0);
}
else
{

stack[++top[i]]=data;


}
}
int pop(int i)
{
int d;
if(top[i]==boundary[i])
{
printf("Underflow\n");
exit (0);
}
else
{
d=stack[top[i]];
top[i]--;
}
return d;

}


