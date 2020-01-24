#include <stdio.h>
int main()
{
	int n,c[50],i=0,j;
	printf("Enter Decimal No ");
	scanf("%d",&n);
	printf("Binary No "); 
	while(n>0)
	{
		c[i] = n%2;
		n /= 2;
		i++;
	}
	
	for (j=i-1;j>=0;j--)
	{
		printf("%d ",c[j]);
	}
	return 0;
}
