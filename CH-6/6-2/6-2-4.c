#include<stdio.h>

main()
{
	int i,n,a=0,b=1,c;
	printf("Enter any number :");
	scanf("%d",&n);
	printf(" %d %d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
