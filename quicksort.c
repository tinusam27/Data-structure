#include<stdio.h>
int a[20];
void quicksort(int first,int last);
void main()
{

	int l,i,j,n;
	printf("enter length of the array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	quicksort(0,n-1);\
printf("the sorted element is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}

void quicksort(int first,int last)
{
	int pivot,i,j,t;
	if(first<last)
	{
		pivot=a[first];
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=pivot&&i<last)
			{
			i++;
			}

			while(a[j]>=pivot&&j>first)
			{
			j--;
			}
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[first];
		a[first]=a[j];
		a[j]=t;
		quicksort(first,j-1);
		quicksort(j+1,last);
	}
}
