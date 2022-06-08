//natural numbers using while loop
#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number:\n");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}
