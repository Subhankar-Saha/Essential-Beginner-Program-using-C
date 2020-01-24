#include <stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return (n*fact(n-1));
	}
	else{
		return 1;
	}
}
int main()
{
	int num;
	long long int f;
	printf("Enter Number ");
	scanf("%d",&num);
	f = fact(num);
	printf("Factorial is %lld",f);
	return 0;
}
