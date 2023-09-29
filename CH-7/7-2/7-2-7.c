#include<stdio.h>

main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
		printf("\n");
	}
       for(s=1;s<=i-1;s++)
	   {
	   	 printf(" ");
	   }	
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
		printf("\n");
	}
}
