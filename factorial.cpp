//factorial
#include<stdio.h>
main()
{
	int i,n,fact;
	printf("enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    	fact=fact*i;
		printf("%d\n",fact);         			
	}	
}
