#include<stdio.h>

main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a>=1 && a<=9)
	{
		printf("digit :1");	
	}
	else if(a>=10 &&a<=99)
	{
		printf("digit :2");	
	}
	else if(a>=100 &&a<=999)
	{
		printf("digit :3");	
	}
		else if(a>=1000 &&a<=9999)
	{
		printf("digit :4");	
	}
		else if(a>=10000 &&a<=99999)
	{
		printf("digit :5"); 	
	}
		else
	{
		printf("digit");	
	}
}
