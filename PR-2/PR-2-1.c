#include<stdio.h>
main()
{
	char n;
	printf("Enter any number :");
	scanf("%c",&n);
	if(n>='A' && n<='Z') 
	{
		printf("APHABET ");
	}
	else if(n>='a' && n<='z')
	{
		printf("alphabet ");
	}
	else if(n>='0'&&n<='9')
	{
		printf("This is digit ");
	}
	else
	{
		printf("Special characater");
	}
}
