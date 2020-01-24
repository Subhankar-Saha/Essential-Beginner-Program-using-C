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
	printf("Sum of All Digit %lld\n",sum);
	return 0;
}
