#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*addr;
};
struct node *createnode(int item)
{
	struct node*p;
	p=(struct node*) malloc (sizeof (struct node));
	p->data=item;
	p->addr=NULL;
	return p;
}
struct node *insertbeg(struct node*n,struct node*head)
{
	if(head==NULL)
	head=n;
	else
	{
		n->addr=head;
		head=n;
	}
	return head;
}
struct node *insertend(struct node*n,struct node*head)
{
	struct node*p;
	{
		if(head==NULL)
		head=n;
		else
		{
			p=head;
			while(p->addr!=NULL)
void traversal(struct node*head)
{
struct node*p;
{
	if(head==NULL)
	printf("empty");
	else
		p=head;
		while(p!=NULL)
		{
			printf("%d", p->data);
			p=p->addr;
		}
}
}
void main()
{
	
	int choices,data,data2
	struct node *n;
	struct node *head=NULL;
	while(1)
	{
	printf("choices:\n 1.insertion at begining\n 2.insertion at end\n 3.insertion at middle\n 4.traversal\n 5.delection at begining\n 6.delection at end\n 7.delection at middle\n");
	printf("enter the case");
	scanf("%d",&choices);
	switch(choices)
	{
		case 1:printf("enter your data");
			scanf("%d",&data);
			struct node *createnode(int item);
			n=createnode(data);
			head=insertbeg(n,head);
		break;	
		case 2:printf("enter your data");
			scanf("%d",&data2);
			
			
		break;	
		case 3:printf("insertion at middle");
		break;	
		case 4:printf("traversal");
			traversal(head);
		break;	
		case 5:printf("deletion at begining");
		break;	
		case 6:printf("deletion at end");
		break;	
		case 7:printf("deletion at middle");
		break;
	}
	printf("\n\n");
	}
}
