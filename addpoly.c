#include<stdio.h>
#include<stdlib.h>
struct term
{
	int coeff,exp;
	struct term *addr;
};
struct term *createterm(int coeff, int exp)
{
	struct term *p;
	p=malloc(sizeof(struct term));
	p->coeff=coeff;
	p->exp=exp;
	p->addr=NULL;
	return p;
};
struct term *createpoly(int n)
{
	int i,coeff,exp;
	struct term *head =NULL, *nt,*last;
	for(i=0; i<n; i++)
	{
		printf("enter the coeff and exp of term %d:",i+1);
		scanf("%d",&coeff);
		scanf("%d",&exp);
		nt=createterm(coeff,exp);
		if(head==NULL)
		{
			head=last=nt;
		}
		else
		{
			last->addr=nt;
			last=nt;
		}
		return head;
	}
};
struct term *addpoly(struct term *h1, struct term *h2)
{
	struct term *rh=NULL,*n,*last,*p1,*p2;
	p1=h1;
	p2=h2;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->exp> p2->exp)
			{
				n=createterm(p1->coeff,p1->exp);
				p1=p1->addr;
			}
		else if(p2->exp> p1->exp)
			{
				n=createterm(p2->coeff,p2->exp);
				p2=p2->addr;
			}
		else 
			{
				n=createterm(p1->coeff+p2->coeff,p1->exp);
				p1=p1->addr;
				p2=p2->addr;
			}
	}
	if(rh==NULL)
			rh=last=n;
	else
				{
					last->addr=n;
					last=n;
				}
	
	while(p1!=NULL)
	{
		n=createterm(p1->coeff,p1->exp);
		if(rh==NULL)
			rh=last=n;
		else
			{
				last->addr=n;
				last=n;
			}

	}
	while(p2!=NULL)
	{
		n=createterm(p2->coeff,p2->exp);
		if(rh==NULL)
			rh=last=n;
		else
			{
				last->addr=n;
				last=n;
			}
	}
		return rh;
};
void traverse(struct term *head)
{
	struct term*p;
	p=head;
	while(p!=NULL)
	{
		printf("%dx%d",p->coeff,p->exp);
		p=p->addr;
	}
};
void main()
{
	int n1,n2;
	struct term *p1,*p2,*p3;
	printf("enter the number of term in polynomial 1: ");
	scanf("%d",&n1);
	printf("enter the terms:\n");
	p1=createpoly(n1);
	printf("enter the number of term in polynomial 2:");
	scanf("%d",&n2);
	printf("enter the terms:\n");
	p2=createpoly(n2);
	p3=addpoly(p1,p2);
	printf("\nthe sum of polynomial is:\n");
	traverse(p3);
	printf("\n");
	
}

