#include<stdio.h>

main()
{
	int i,j,s;
	for(i='A';i<='E';i++)
	{
		for(s=1;s<='E'-i;s++)
		{
			printf(" ");
		}
			for(j=i;j>='A';j--)
			{
				printf("%c",j);
			}
		printf("\n");	
	}
}
