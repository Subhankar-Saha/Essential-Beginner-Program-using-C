#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter Number ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=n;j>i;j--)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------\n");
	for (i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		for (k=j;k<=n;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	printf("------------------\n");
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------\n");
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=j;k<=n;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

