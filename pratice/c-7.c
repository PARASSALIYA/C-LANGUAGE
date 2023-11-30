#include<stdio.h>

main()
{
	int i,j;
	for(i=100;i<=120;i++)
	{
		for(j=i;j<=120;j++)
		{
			if(j%5==0)
			printf("%d ",j);
		}
		printf("\n");
	}
}
