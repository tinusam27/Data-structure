#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*lc,*rc;
};
 
struct node*createnode(data)
	{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->rc=NULL;
	p->lc=NULL;
	return p;
	};

struct node *insert (struct node *root, struct node *item)
{
	struct node *tt;
	struct node *parent,*ptr,*p,*n;
	if (root==NULL)
	root=n;
	else
	{
		ptr=root;
		while(ptr!=NULL)
		{
			if(ptr->data>=n->data)
			{
				p=ptr;
				ptr=ptr->lc;
			}
			else
			{
				p=ptr;
				ptr=ptr->rc;
			}
		}
		
		if(p->data>=n->data)
		{
			p->lc=data;
		}
		else
		{
			p->rc=data;
		}
	}
}

void inorder(struct node*p)
{
	if(p!=NULL)
	{
		inorder(p->lc);
		printf("p->data");
		inorder(p->rc);
	}
}

void main()
{
int choice;
struct node*n;
while(1)
{
	printf("enter the choice 1.insertion \n2.traversal\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("your choice is insertion \n");
			printf("enter the data\n");
			scanf("%d",&data);
			p=createnode(n);
			root=insert(n,data);
			break;
		}
		case 2:
		{
			inorder(root);
			break
		}
	
		printf("\n\n")
	}
}
}
