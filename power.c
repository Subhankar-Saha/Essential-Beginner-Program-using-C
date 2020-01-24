#include <stdio.h>
int main()
{
	int base,exp,i=0,j;
	long long int result;
	printf("Enter Base and Exponent Value ");
	scanf("%d %d",&base,&exp);
	result = base;
	while(exp!=1)
	{
		result =result*base;
		exp = exp-1; 
	}
	printf("The Power is %lld",result);
	return 0;
}
