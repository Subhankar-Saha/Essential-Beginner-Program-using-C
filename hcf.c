#include <stdio.h>
int hcf(int n1,int n2)
{
	if(n2!=0)
	{
		return hcf(n2,n1%n2);
		
	}
	else{
		return n1;
	}
}

int main()
{
	int n1 , n2,p,k;
	printf("Enter 2 No ");
	scanf("%d %d",&n1,&n2);
	p = hcf(n1,n2);
	k = (n1*n2)/p;
	printf("GCD is %d \n",p);
	printf("LCM is %d",k);
	return 0;
}
