#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter row :");
	scanf("%d",&r);
	printf("Enter column :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);	
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	  for (i = 0; i < r; i++)
    	{
        	for (j = 0; j < c; j++)
        	{
				if(i==j||i+j==2)
				{
					printf("%d ",a[i][j]);
				}      	
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
}
