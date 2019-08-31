#include<stdio.h>
#include<stdlib.h>
struct node 
	{
	int data;
	struct node *address;
	};
struct node *createnode(int item)
	{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->address=NULL;
	return p;
	};
struct node *insertbeg(struct node *n,struct node *head)
	{
	if(head==NULL)
	{
	head=n;
	}
	else
	{
	n->address=head;
	head=n;
	return head;
	}
	};
struct node *insertmid(struct node *n,struct node *head,int pos)
	{
	int i;
	struct node *p;
	i=1;
	p=head;
	while(p->address!=NULL&&i<pos-1)
		{
		p=p->address;
		i++;
		}
	n->address=p->address;
	p->address=n;
	};
struct node *insertend(struct node *n,struct node *head)
	{
	struct node *p;
	if(head==NULL)
		{
		head=n;
		}
	else
		{
		p=head;
		while(p->address!=NULL)
			{
			p=p->address;
			}
		p->address=n;
		}		
	return head;
	};
struct node *delbeg(struct node *head)
	{
	if(head==NULL)
		{
		printf("empty");
		}
	else
		{
		head=head->address;
		}
	return head;
	};
struct node *delmid(struct node *head,int data)
	{
	if(head==NULL)
		{
		printf("empty");
		}
	else 
	{
	struct node *c,*p;
	c=p=head;
	while(p->data!=data&&p!=NULL)
		{
		c=p;
		p=p->address;
		}
	if(p!=NULL)
		{
		c->address=p->address;
		}
	else
		{
		printf("no data found");
		}
	}
	};
struct node *delend(struct node *head)
	{
	struct node *p,*c;
	if(head==NULL)
		{
		printf("empty");
		}
	else
		{
		c=p=head;
		}
	while(p->address!=NULL)
		{
		c=p;
		p=p->address;
		}
	return head;
	};
void traversal(struct node *head);
void main()
{
int choice,a,po;
struct node *head=NULL,*p;
while(1)
{
printf("\nenter the choice :\n 1.insert at the begining \n2.insert at a position\n3.insert at the end\n4.delete at the begining \n5.delete at a position \n6.delete at the end\n7.trversal\n");
scanf("%d",&choice);
switch(choice)
	{
	case 1:
		{
		printf("you are at option 1.insert at the begining\n");
		printf("enter the data\n");
		scanf("%d",&a);
		p=createnode(a);
		head=insertbeg(p,head);
		break;
		}
	case 2:
		{
		printf("you are at choice 2.insert at a position\n");
		printf("enter the data\n");
		scanf("%d",&a);
		printf("enter the position to be inserted");
		scanf("%d",&po);
		p=createnode(a);
		head=insertmid(p,head,po);
		break;
		}
	case 3:
		{
		printf("you are at choice 3.insert at the end\n");
		printf("enter the data\n");
		scanf("%d",&a);
		p=createnode(a);
		head=insertend(p,head);
		break;
		}
	case 4:
		{
		printf("you are at choice 4.delete at the begining");	
		head=delbeg(head);
		break;
		}
	case 5:
		{
		printf("you are at choice 5.delete at a position");
		printf("enter the data");	
		scanf("%d",&a);
		head=delmid(head,a);
		break;
		}
	case 6:
		{
		printf("you are at choice 6.delete at the end");
		head=delend(head);
		break;
		}
	case 7:
		{
		printf("you are at choice 7.trversal\n");
		struct node *p;	
		if(head==NULL)
			{
			printf("empty");
			}
		else
			{
			p=head;
			while(p!=NULL)
				{	
				printf("%d\n",p->data);
				p=p->address;
				}
			}
		break;
		}
	default:
		{
		printf("you have entered the wrong option ");
		break;
		}
	}
}}

