#include <stdio.h>
int main()
{
	int num,i,temp,rem,result;
	printf("Enter Num  ");
	scanf("%d",&num);
	
	for (i=2;i<num/2;++i)
	{
		if(num % i==0)
		{
			rem = 0;
			break;
		}
	}
	if (rem == 1)
	{
		printf("%d is Prime No",num);
	}
	else
	{
		printf("%d is not Prime No",num);	
	}
	return 0;
}
