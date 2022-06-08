//sum of digits of a number
#include<stdio.h>
main()
{
	int n,rem,sum;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of all digits is %d",sum);
}
