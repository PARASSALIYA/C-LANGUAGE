#include<stdio.h>

main()
{
	int n,a=1;
	printf("Enter any number :");
	scanf("%d",&n);
	do
	{
		if(a%2==0)
		printf("%d\n",a);
		a++;
	}
	while(a<=n);
}
