#include<stdio.h>

main()
{
	int n,first,last;
	printf("Enter any number :");
	scanf("%d",&n);
	last=n%10;
	while(n!=0)
	{
		n=n/10;
	}
	
	printf("first and last sum :%d",first + last);
}
