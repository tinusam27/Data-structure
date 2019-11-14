#include<stdio.h>
void main()
{
	int node,edge,i,mat[100][100],n,start,end,j;
	printf("Number of nodes:");
	scanf("%d",&node);
	printf("Number of edges:");
	scanf("%d",&edge);
	for(i=0; i<edge; i++)
	{
		printf("edge(%d)\n\n",i);
		printf("Start:");
		scanf("%d",&start);
		printf("End:");
		scanf("%d",&end);
		mat[start][end]=1;
		mat[end][start]=1;
	}
	printf("\nResultant\n\n");

	for(i=0; i<edge; i++)
	{
		for(j=0; j<edge; j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}
