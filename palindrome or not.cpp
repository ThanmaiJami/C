//palindrome number or not
#include<stdio.h>
main()
{
	int n,rev,rem,o;
	rev=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	o=n;
	while(n>0)
	{
		rev=rev*10;
		rem=n%10;
		rev=rev+rem;
		n=n/10;
	}
	printf("reverse of number is %d",rev);
	if(o==rev)
		printf("palindrome number");
	else 
		printf("is not a palindrome number");
}
