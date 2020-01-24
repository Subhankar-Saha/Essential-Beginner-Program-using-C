#include <stdio.h>
int main()
{
	int n,i,j,k,count;
	printf("Enter Row ");
	scanf("%d",&n);
	printf("Full Triangle with * \n");
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for (k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("Full Triangle with Number\n");
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for (k=1,count = 1;k<=(2*i-1);k++,count++)
		{
			printf("%d",count);
		}
		printf("\n");
	}
	
	printf("Full Triangle with Number\n");
	count = 1;
	for (i=1;i<=n;i++)
	{	
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for (k=1;k<=(2*i-1);k++)
		{
			printf("%d",count);
		}
		printf("\n");
		count++; 
	}
	
	return 0;
}
