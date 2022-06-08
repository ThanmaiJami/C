/*natural numbers using while loop*/
#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
