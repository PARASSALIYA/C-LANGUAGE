#include <stdio.h>

int main()
{
	int r, c;
	
	printf("Enter the row size :");
	scanf("%d", &r);
	
	printf("Enter the column size :");
	scanf("%d", &c);

	printf("Enter array's elements :\n");
	
	int a[r][c], i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("a[%d][%d] :", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}