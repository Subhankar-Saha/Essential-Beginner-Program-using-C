#include <stdio.h>
int main()
{
	long long int i,num,sum=0,sump=0;
	printf("Enter No ");
	scanf("%lld",&num);
	int temp = num;
	while(num>0)
	{
		i = num % 10;
		sum = sum + i;
		num /=10;
	}
	if(sum>=10)
	{
		temp = sum;
		
		while(sum>0)
		{
			i=sum%10;
			sump +=i;
			sum/=10;
		}
	}
	printf("The Generic Root is %lld",sump);
	return 0;
}
