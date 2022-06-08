//sum of square of first n numbers
#include<stdio.h>
main()
{
	int i,n,sq,sum;
	sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sq=i*i;
		sum=sum+sq;
	}
	printf("sum of squares=%d",sum);
}
