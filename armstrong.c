#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,count,num,result=0,rem,temp;
	printf("Enter The Number ");
	scanf("%d",&num);
	count = log10(num)+1;   // No of Digit Count
	//printf("%d",count);
	temp = num;
	while(temp>0)
	{
		i = temp%10;
		result +=pow(i,count);
		temp/=10;
	}
	printf("Result is %d\n",result);
	if(result == num)
	printf("%d is Armstrong No",result);
	else
	printf("%d is Not Armstrong No",result);
	return 0;
}
