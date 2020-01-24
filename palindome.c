#include <stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter No ");
	scanf("%d",&num);
	int temp = num;
	while(num>0)
	{
		i = num % 10;
		sum = sum*10 + i;
		num /=10;
	}
	printf("Reverse No  %d\n",sum);
	if(temp == sum){
		printf("This Number is Paindorme");
	}
	else{
		printf("This Number is Not Palindrome");
	}
	
	return 0;
}
