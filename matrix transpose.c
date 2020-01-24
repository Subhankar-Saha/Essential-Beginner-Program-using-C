#include <stdio.h>
int main()
{
	int i,j,mx[100][100],r,c;
	printf("Enter Row and Col No ");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter matrix (%d %d) pos value ",i+1,j+1);
			scanf("%d",&mx[i][j]);
		}
		printf("\n");
	}
	// display matrix
	printf("Matrix : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mx[i][j]);
			//scanf("%d",mx[i][j]);
		}
		printf("\n\t");
	}
	printf("\n");
	// Transpose Matrix
	printf("Transpose Matrix : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mx[j][i]);
			//scanf("%d",mx[i][j]);
		}
		printf("\n\t\t");
	}
	return 0;
}
