#include<stdio.h>
int main()
{
	int array[100],s,i,n;
	printf("enter number of element in array\n");
	scanf("%d",&n);
	printf("enter %d integer(s)\n", n);
	for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
	printf("enter the number to search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(array[i]==s)
		{
			printf("%d is present at location %d\n",s,i+1);
			break;
		}
	}
	if(i==n)
		printf("%d not present in the array\n",s);
	return 0;
}
		


