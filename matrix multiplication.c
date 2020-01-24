#include <stdio.h>
int main()
{
	int i,j,k,a[100][100],b[100][100],result[100][100],r,c,r2,c2;
	printf("1st Matrix \n");
	printf("Enter Row and Col No ");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter matrix (%d %d) pos value ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("*******************\n");
	printf("2nd Matrix \n");
	printf("Enter Row and Col No ");
	scanf("%d %d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter matrix (%d %d) pos value ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}	
	// Multiplication 
	if(c == r2)
	{
	
		for (i=0;i<r;i++)
		{
			for(j = 0;j<c2;j++)
			{
				result[i][j] = 0;	
			}
		}
		for (i=0;i<r;i++)
		{
			for(j = 0;j<c2;j++)
			{
				for(k=0;k<c;k++)
				{
					result[i][j] += a[i][k] * b[k][j]; 
				}
			}
		}
		// Print after Multiplication
		for (i=0;i<r;i++)
		{
			for(j = 0;j<c2;j++)
			{
				
			printf("%d ",result[i][j]); 
				
			}
			printf("\n");
		}
	}
	else{
		printf("Invalid Dimension ");
		
	}
	
	
return 0;	
}

