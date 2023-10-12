#include <stdio.h>

main()
{
	int y1, y2;
	printf("Enter the first number :");
	scanf("%d", &y1);
	printf("\nEnter the second number :");
	scanf("%d", &y2);
	int i;
	printf("\nThe array is :");
	for (i = y1; i < y2; i++)
	{
		if (i % 4 == 0)
		{
			printf("%d ", i);
		}
	}
}
