#include <stdio.h>

main()
{
    int y1, y2;
	printf("Enter the first number :");
	scanf("%d", &y1);
	printf("\nEnter the second number :");
	scanf("%d", &y2);
	int a[y2 - y1], i, size = 0;
	printf("\nThe array is :\n");
	for (i = y1; i < y2; i++)
	{
    	if (i % 4 == 0)
    	{
        	a[size] = i;
        	size++;
    	}
	}
	for (i = 0; i < size; i++)
	{
    		printf("a[%d]:%d\n", i, a[i]);
	}
}
