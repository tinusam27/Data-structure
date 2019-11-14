#include<stdio.h>
#include<stdlib.h>
void insertion sort(a,n)
{
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1=a[j];
			j=j-1;
		}
	a[j+1]=temp;
	}
};

void traversal(int arr[],int n)
{
	int i;
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
};
void main()
{
	int arr[50],n,i;
	printf("enter the size of the array");
	scan
