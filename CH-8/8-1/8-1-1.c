#include <stdio.h>

int main()
{
	int size;
	printf("Enter array size :");
	scanf("%d", &size);
	printf("\nEnter array elements :\n");

	int i, a[size];
	for (i = 0; i < size; i++)
	{
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("Length of an Array :%d", size);
}
