#include <stdio.h>

int main()
{
	int r, c;

	printf("Enter row :");
	scanf("%d", &r);

	printf("column :");
	scanf("%d", &c);

	int a[r][c], i, j;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("a[%d][%d] :", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (a[i][j] <= 0)
			{
				printf("%d", a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
