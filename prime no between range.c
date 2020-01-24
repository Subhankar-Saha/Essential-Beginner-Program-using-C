#include <stdio.h>
int main()
{
	int num,num2,i,temp,rem,result;
	printf("Enter Range  ");
	scanf("%d %d",&num,&num2);
	while(num < num2)
	{
		//printf("%d\n",num);
		rem = 1;
		
		for (i=2;i<num/2;++i)
		{
			if(num % i==0)
			{
				rem = 0;
				break;
			}
		}
		if (rem == 1){
			printf("%d ",num);
		}
		num+=1 ;
	}
	
	return 0;
}
