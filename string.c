#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0,k,lens,lenp,flag;
	char string[50],pattern[10];
	printf("enter the string");
	scanf("%s",string);
	printf("enter the pattern to search");
	scanf("%s",pattern);
	lens=strlen(string);
	lenp=strlen(pattern);
	while(i<lens && j<lenp)
		{
			if(j==0)
			k=i;
			if(string[i]==pattern[j])
				{
				i++;
				j++;
				flag=1;
				}
			else
				{
				i=k+1;
				j=0;
				flag=0;
				}
		}
		if(flag>=1)
			printf("The pattern is present in the string,\n");
		else
			printf("The pattern is not present in the string,\n");
		i=k+lenp;
		while(string[i]!='\0')
		{
			string[k]=string[i];
			k++;
			i++;
		}
		string[k]='\0';
		printf("The modified string is : %s",string);
}
