#include<stdio.h>
#include<stdlib.h>
void enqueue(int i , int data);
int dequeue(int i);
int size=10;
int queue[10];
int front[5];
int boundary[5];
int rear[5];
void main()
{
int j,data,ch,d,i,n;
printf("Enter number of queues");
scanf("%d",&n);
front[0]=-1,boundary[0]=-1,rear[0]=-1;
for(j=1;j<=n;j++)
{

front[j]=boundary[j]=rear[j]=((size-1)/n)*j;

}                                                                                                                                                                          
//int top[j];
//int boundary[j];
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
enqueue(i,data);
break;
}
case 2:
{
printf("Choice selected for deletion:\n");
printf("Enter the number of stack to which deletion need to take place:");
scanf("%d",&i);
d=dequeue(i);
printf("%d is popped",d);
break;
}
}
}
}
void enqueue(int i, int data)
{

if(rear[i]==boundary[i+1])
{
printf("Overflow\n");
exit (0);
}
else
{
if(rear[i]==boundary[i])
{
front[i]++;
}
queue[++rear[i]]=data;

}
}
int dequeue(int i)
{
int d;
if(rear[i]==boundary[i])
{
printf("Underflow\n");
exit (0);
}
else
{
d=queue[front[i]];
if(front[i]==rear[i])
{
front[i]=boundary[i]=rear[i];


}
else
{
front[i]++;
}

}
return d;

}
