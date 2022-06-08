//sum of n elements
#include<stdio.h>
main()
{
	int i,n,x,sum;
	sum=0;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter %d number",i);
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("sum=%d",sum);
}
