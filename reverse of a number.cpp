//reverse of a number
#include<stdio.h>
main()
{
	int n,rev,rem;
	rev=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rev=rev*10;
		rem=n%10;
		rev=rev+rem;
		n=n/10;
	}
	printf("the reverse of a number is %d",rev);
}
